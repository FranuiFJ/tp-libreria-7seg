#include <Arduino.h>
#include "seg7prof.h"

void setup() {
    seg7prof_init();
}

void loop() {
  for(int i=0; i<10; i++){
    seg7prof(i);
    delay(1000);
  }
}