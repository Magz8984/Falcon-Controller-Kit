//#include "PID.h"
#include "EFS.h"


void setup() {
  Flight *flight;
  flight=(Flight*) malloc(sizeof(Flight));

  flight->front_left=(Servo*) malloc(sizeof(Servo));
  flight->front_right=(Servo*) malloc(sizeof(Servo));
  flight->back_left=(Servo*) malloc(sizeof(Servo));
  flight->back_right=(Servo*) malloc(sizeof(Servo));

}

void loop() {

}
