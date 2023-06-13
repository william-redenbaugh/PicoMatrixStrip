#include <Arduino.h>
#include "global_includes.h"
void setup() {
  threads_list_init();  
}

void loop() {
  vTaskDelete(NULL);
}