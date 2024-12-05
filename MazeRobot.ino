#include <Servo.h>

Servo Xservo;
Servo Yservo;

int VRXpin=A0;
int VRYpin=A1;

int XServoPin=9;
int YServoPin=10;

int WVx;
int WVy;

int Xval;
int Yval;

int dt=100;

int Xrange=10;
int Yrange=20;

int adjustX=0;
int adjustY=0;



void setup() {

pinMode(VRXpin, INPUT);
pinMode(VRYpin, INPUT);

pinMode(XServoPin, OUTPUT);
pinMode(YServoPin, OUTPUT);

Xservo.attach(XServoPin);
Yservo.attach(YServoPin);
}

void loop() {

Xval=analogRead(VRYpin);
WVx=(Xrange/1023.)*Xval*(-1)+Xrange+adjustX;
Yval=analogRead(VRXpin);
WVy=(Yrange/1023.)*Yval+adjustY;

Xservo.write(WVx);
Yservo.write(WVy);

delay(dt);
}

// Coded by John Doe
