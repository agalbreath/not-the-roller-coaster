#include <Servo.h>

/*
  PhotoMotor
  When a photoresistor registers the passing of a ball, adjusts motor speed based on time.
 */

#define photoStart 2    //Photoresistor at the beginning of the device
#define photoBelt 3     //Photoresistor at the beginning of the belt
#define photoBeltM 4    //Photoresistor at the midpoint of the belt
#define failSafe 5      //Photoresistor at the very end, just in case
#define victor 6        //Input for the victor signal line.

const double ball = 1;       //CHANGE VALUE OF BALL ON PHOTORESISTORS
const double lengthStart = 3;//Total length of device
const double lengthBelt = 2; //Length of the belt
const double radius = 2.8    //Radius of the Wheel

int start;
int photoRead;
int timeLeft;
int beltSpeed;
int writeValue;

Servo victor;


void setup() {
  pinMode(photoStart, INPUT);
  pinMode(photoBelt, INPUT);
  pinMode(photoBeltM, INPUT);
  pinMode(failSafe, INPUT);
  victor.attach(victor);
}

int main() {
  if(photoBelt < ball) {
    photoRead = millis();
    timeLeft = 15000 - photoRead;
    physicsMath(lengthBelt, timeLeft);
  }
}

void physicsMath(int length, int time) {
  beltSpeed = length/time;
  writeValue = 1; //PUT MATH HERE
}
  
