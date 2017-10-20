/*
  PhotoMotor
  When a photoresistor registers the passing of a ball, adjusts motor speed based on time.
 */

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

int start;
int photoRead;
int timeLeft;
int beltSpeed;
int beltVoltage;


void setup() {
  pinMode(photoStart, INPUT);
  pinMode(photoBelt, INPUT);
  pinMode(photoBeltM, INPUT);
  pinMode(failSafe, INPUT);
//  pinMode(pwm, OUTPUT);
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
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
  beltVoltage = 1; //PUT MATH HERE
}
  
