#include <Servo.h>

Servo R1, R2, R3, L1, L2, L3;
int pos=0;

void setup() {
  R1.attach(9);
  R2.attach(10);
  R3.attach(11);
  L1.attach(3);
  L2.attach(5);
  L3.attach(6);
}

void loop() {
  //frist move 0 to 90
  for(pos=0; pos <= 90; pos++){
    delay(15);
    R1.write(pos);
    L1.write(pos);
    R2.write(pos);
    L2.write(pos);
    R3.write(pos);
    L3.write(pos);
  }
  delay(2000);
  for(pos=90; pos >= 0; pos--){
    delay(15);
    R1.write(pos);
    L1.write(pos);
    R2.write(pos);
    L2.write(pos);
    R3.write(pos);
    L3.write(pos);
  }
  
  delay(2000);
  //sec move

  for(pos=0; pos<=135 ;pos++){
    R2.write(pos);
    R3.write(pos);
    delay(15);
  }
  delay(2000);
  for(pos=135; pos>=0 ;pos--){
    R2.write(pos);
    R3.write(pos);
    delay(15);
  }

  delay(2000);

  //third move
  for(pos=90; pos<=180;pos++){
    L2.write(pos);
    L3.write(pos);
    delay(15);
  }
  delay(2000);
  for(pos=180; pos>=90;pos--){
    L2.write(pos);
    L3.write(pos);
    delay(15);
  }
  
  delay(1000);
  //set to initial
  L2.write(0);
  L3.write(0);
  
  delay(2000);
  
}
