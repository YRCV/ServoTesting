#include <Arduino.h>
#include <Servo.h>
#include <Encoder.h>

#define E_CLK 2
#define E_DT 3

Encoder e1(E_CLK, E_DT);

Servo s1;
Servo s2;
Servo s3;
Servo s4;

int pos = 0;
long P0 = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Basic Servo test with Encoder: ");
  
  s1.attach(11, 500, 2500);
  //s2.attach(10, 500, 2500);
  //s3.attach(9, 500, 2500);
  //s4.attach(6, 500, 2500);
  
  s1.write(90);
  //s2.write(90);
  //s3.write(90);
  //s4.write(90);
}

void loop() {
  /*
  long P1 = e1.read();
  if (P1 != P0) {
    pos = map(P1, -100, 100, 0, 180);
    pos = constrain(pos, 0, 180);
    s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    Serial.print("Position: ");
    Serial.print(P1);
    Serial.print(" Angle: ");
    Serial.println(pos);

    P0 = P1;
  }

  /* for(int i = 0; i<270; i+=90){
    s1.write(i);
    s2.write(i);
    s3.write(i);
    s4.write(i);
    delay(2000);
    }
      */
}