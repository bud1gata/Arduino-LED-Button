#include <Arduino.h>
#define ledRed 2
#define ledGreen 3
#define ledYellow 4
#define btngreen 5
#define btnYellow 6
#define btnRed 7

void setup() {
  // put your setup code here, to run once:
  //button input
  pinMode(btngreen, INPUT);
  pinMode(btnYellow, INPUT);
  pinMode(btnRed, INPUT);

  //button write
  digitalWrite(btngreen, HIGH);
  digitalWrite(btnRed, HIGH);
  digitalWrite(btnYellow, HIGH);

  //led output
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void lampuMerah (int merah){
  if (merah == 1)
  {
    digitalWrite(ledRed, HIGH);
  } else {
    digitalWrite(ledRed, LOW);
  }  
}

void lampuHijau (int hijau){
  if (hijau == 1)
  {
    digitalWrite(ledGreen, HIGH);
  } else {
    digitalWrite(ledGreen, LOW);
  }  
}

void lampuKuning (int kuning){
  if (kuning == 1)
  {
    digitalWrite(ledYellow, HIGH);
  } else {
    digitalWrite(ledYellow, LOW);
  }  
}

void loop() {
  // put your main code here, to run repeatedly:
  int isButtonGreen = digitalRead(btngreen);  
  if (isButtonGreen == 0)
  {
      lampuHijau(1);
  } else {
      lampuHijau(0);
  }

  int isButtonYellow = digitalRead(btnYellow);  
  if (isButtonYellow == 0)
  {
      lampuKuning(1);
  } else {
      lampuKuning(0);
  }

  int isButtonRed = digitalRead(btnRed);  
  if (isButtonRed == 0)
  {
      lampuMerah(1);
  } else {
      lampuMerah(0);
  }
}