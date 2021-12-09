
cmake_minimum_required(VERSION 3.12)

project(xor C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

add_executable(xor "")

target_include_directories(xor
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/.
)

set_target_properties(
  xor
  PROPERTIES
  COMPILE_FLAGS -fno-rtti
  COMPILE_FLAGS -fno-exceptions
  COMPILE_FLAGS -fno-threadsafe-statics
  #COMPILE_FLAGS -nostdlib
)

target_sources(xor
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  ${CMAKE_CURRENT_LIST_DIR}/main_functions.cpp
  ${CMAKE_CURRENT_LIST_DIR}/model.cpp
  # ${CMAKE_CURRENT_LIST_DIR}/model_16_128.tflite.cpp
  # ${CMAKE_CURRENT_LIST_DIR}/model_16_128_optimized.tflite.cpp
  ${CMAKE_CURRENT_LIST_DIR}/main_functions.h
  ${CMAKE_CURRENT_LIST_DIR}/model.h
)

target_link_libraries(
  xor
  pico-tflmicro
  hardware_pwm
  pico_stdlib
)

# enable usb output, disable uart output
#pico_enable_stdio_usb(xor 1)
#pico_enable_stdio_uart(xor 0)

pico_add_extra_outputs(xor)
