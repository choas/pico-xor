#include "pico/stdlib.h"
#include "pico/time.h"
#include <stdio.h>

#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "model.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

#include "main_functions.h"

const uint BUTTON1_PIN = 11;
const uint BUTTON2_PIN = 12;
const uint LED_PIN = 16;
// const uint LED_PIN =  PICO_DEFAULT_LED_PIN;

// Globals, used for compatibility with Arduino-style sketches.
namespace
{
  tflite::ErrorReporter *error_reporter = nullptr;
  const tflite::Model *model = nullptr;
  tflite::MicroInterpreter *interpreter = nullptr;
  TfLiteTensor *input = nullptr;
  TfLiteTensor *output = nullptr;
  int inference_count = 0;

  constexpr int kTensorArenaSize = 2000;
  uint8_t tensor_arena[kTensorArenaSize];
} // namespace

// The name of this function is important for Arduino compatibility.
void setup()
{

  gpio_init(BUTTON1_PIN);
  gpio_set_dir(BUTTON1_PIN, GPIO_IN);
  gpio_init(BUTTON2_PIN);
  gpio_set_dir(BUTTON2_PIN, GPIO_IN);
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  ///

  // Set up logging. Google style is to avoid globals or statics because of
  // lifetime uncertainty, but since this has a trivial destructor it's okay.
  // NOLINTNEXTLINE(runtime-global-variables)
  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;

  // Map the model into a usable data structure. This doesn't involve any
  // copying or parsing, it's a very lightweight operation.
  model = tflite::GetModel(model_data);
  if (model->version() != TFLITE_SCHEMA_VERSION)
  {
    TF_LITE_REPORT_ERROR(error_reporter,
                         "Model provided is schema version %d not equal "
                         "to supported version %d.",
                         model->version(), TFLITE_SCHEMA_VERSION);
    return;
  }

  // This pulls in all the operation implementations we need.
  // NOLINTNEXTLINE(runtime-global-variables)
  static tflite::AllOpsResolver resolver;

  // Build an interpreter to run the model with.
  static tflite::MicroInterpreter static_interpreter(
      model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk)
  {
    TF_LITE_REPORT_ERROR(error_reporter, "AllocateTensors() failed");
    return;
  }

  // Obtain pointers to the model's input and output tensors.
  input = interpreter->input(0);
  output = interpreter->output(0);

  // Keep track of how many inferences we have performed.
  inference_count = 0;
}

// The name of this function is important for Arduino compatibility.
void loop()
{
  int button1 = gpio_get(BUTTON1_PIN);
  int button2 = gpio_get(BUTTON2_PIN);

  input->data.f[0] = button1;
  input->data.f[1] = button2;

  uint32_t t1 = time_us_32();
  TfLiteStatus invoke_status = interpreter->Invoke();
  uint32_t t2 = time_us_32();

  printf("%.7f %zu\n", output->data.f[0], (t2-t1));

  if (output->data.f[0] > 0.5)
  {
    gpio_put(LED_PIN, true);
  }
  else
  {
    gpio_put(LED_PIN, false);
  }

  sleep_ms(10);

  // Output the results. A custom HandleOutput function can be implemented
  // for each supported hardware target.
  // HandleOutput(error_reporter, x, y);
}
