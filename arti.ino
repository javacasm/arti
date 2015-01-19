#include "articulacion.h"
#include <Servo.h>
#include <Wire.h>
#include <bqLiquidCrystal.h>

int minBase=20;
int maxBase=160;

articulacion cadera(12,minBase,maxBase);
articulacion hombro(11,minBase,maxBase);
articulacion codo(10,minBase,maxBase);
articulacion munecaX(9,minBase,maxBase);
articulacion munecaY(8,minBase,maxBase);
articulacion pinza(7,minBase,maxBase);

LiquidCrystal lcd(0); //creamos un objeto LCD

void setup()
{
  Serial.begin(9600);
   cadera.setMiddle();
   hombro.setMiddle(); 
   codo.setMiddle();
   munecaX.setMiddle();
   munecaY.setMiddle();
   pinza.setMiddle();

   lcd.begin(16,2);
   lcd.clear();
}

void checkControles()
{
  cadera.setControl(analogRead(A0));
  hombro.setControl(analogRead(A1));
  codo.setControl(analogRead(A2));
  pinza.setControl(analogRead(A3));
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(cadera.getPosicion());
  lcd.print(",");
  lcd.print(hombro.getPosicion());
  lcd.print(",");
  lcd.print(codo.getPosicion());
  lcd.print(",");
  lcd.print(pinza.getPosicion());
}

void loop()
{
checkControles();
delay(200);
}

