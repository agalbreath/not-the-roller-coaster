/*
  PhotoMotor
  When a photoresistor registers the passing of a ball, adjusts motor speed based on time.
 */
#include <iostream>
#include <cstudio>
#include <ctime>
const int photoStart = 2;    //Photoresistor at the beginning of the device
const int photoBelt = 3;     //Photoresistor at the beginning of the belt
const int photoBeltM = 4;    //Photoresistor at the midpoint of the belt
const int failSafe = 5;      //Photoresistor at the very end, just in case
const int pwm = 6;           //Pulse Width Modulation, for motors
const int in_1 = 7;          //Motor input positive
const int in_2 = 8;          //Motor input ground
const double ball = 1;       //CHANGE VALUE OF BALL ON PHOTORESISTORS
const double lengthStart = 3;//Total length of device
const double lengthBelt = 2; //Length of the belt


void setup() {
  pinMode(photoStart, INPUT);
  pinMode(photoBelt, INPUT);
  pinMode(photoBeltM, INPUT);
  pinMode(failSafe, INPUT);
  pinMode(pwm, OUTPUT);
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
}

/*
int main() {
  std::clock_t start;
  double duration;
  start = std::clock();
  
  if(photoBelt < 1) {
  
  
  duration = (std::clock()-start/(double)CLOCKS_PER_SEC;
  
  std::cout<<"printf: "<<duration <<'\n';
*/
void main() {
  start = std::clock();
  if(photoBelt < ball) {
    time = std::clock();
    total = time - start;
    remaining = 15000 - total;
    physicsMath(lengthBelt, remaining);
  }
}

void physicsMath(double length, double time) {
  
  
