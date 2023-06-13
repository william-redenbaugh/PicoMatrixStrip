#include <Arduino.h>
#include "global_includes.h"
#include "ESP32DMASPIMaster.h"

void setup() {
  threads_list_init();  
}

void loop() {
  vTaskDelete(NULL);
}