// This is  script converts angles into motions based angle and strength
// Angle determines yaw ,roll and pitch. Strength determines how much roll or pitch
#include <math.h>
#include <Servo.h>

#define MAX_RPMS 2000  // Dependent on esc calib values
#define MIN_RPMS 1050

#define FRONT_MIN 45
#define FRONT_MAX 135
#define BACK_MIN 225
#define BACK_MAX 315
#define LEFT_MIN 136
#define LEFT_MAX 224
#define RIGHT_MIN 315
#define RIGHT_MAX 44


typedef struct Flight{
  Servo *front_left;
  Servo *front_right;
  Servo *back_left;
  Servo *back_right;
  int (*set_rotations)(Flight *flight,int); //struct functions to set rpms;
}Flight;

int setRotations(Flight *flight,int rotations); // Servo Controls

int setRotations(Flight *flight,int rotations){
  flight->front_left->writeMicroseconds(rotations);
  flight->front_right->writeMicroseconds(rotations);
  flight->back_left->writeMicroseconds(rotations);
  flight->back_right->writeMicroseconds(rotations);
  return 0;
}
