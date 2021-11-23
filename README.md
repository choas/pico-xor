# XOR Machine Learning Raspberry Pi Pico

Der Sourcecode für das Training und für die Anwendung zum heise Artikel [Schlauer Zwerg: ML mit dem Raspberry Pi Pico, Teil 2: Modelltraining](https://www.heise.de/hintergrund/Schlauer-Zwerg-ML-mit-dem-Raspberry-Pi-Pico-Teil-2-Modelltraining-6214354.html).

## PicoML

Das [PicoML](./PicoML) Verzeichnis enthält das Python Projekt mit dem XOR Model. Dies ist im Juyter Notebook beschrieben. Das Notebook erstellt die Datei `model.cpp` für die XOR Anwendung.

## pico-tfmicro

Die XOR Anwendung basiert auf [raspberrypi/pico-tflmicro](https://github.com/raspberrypi/pico-tflmicro). Die Beispiele aus dem Verzeichnis `examples` wurden der Übersichtlichkeit entfernt.

### model.cpp

Das Jupyter Notebook aus dem Verzeichnis `PicoML` erstellt die Datei `model.cpp`. Sie ist ein Bestandteil der XOR Anwendung und enthält das erzeugt Machine Learning Modell.
