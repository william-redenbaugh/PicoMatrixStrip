#include <Arduino.h>
#include "FreeRTOS.h"
#include "global_includes.h"

void setup() {
  threads_list_init();  
}

void loop() {
  vTaskDelay(1000/portTICK_PERIOD_MS);
}