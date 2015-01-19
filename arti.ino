#include "articulacion.h"
#include <Servo.h>

int minBase=20;
int maxBase=150;

articulacion cadera(12,minBase,maxBase);
articulacion hombro(11,minBase,maxBase);
articulacion codo(10,minBase,maxBase);
articulacion munecaX(9,minBase,maxBase);
articulacion munecaY(8,minBase,maxBase);
articulacion pinza(7,minBase,maxBase);


void setup()
{

   cadera.setMiddle();
   hombro.setMiddle(); 
   codo.setMiddle();
   munecaX.setMiddle();
   munecaY.setMiddle();
   pinza.setMiddle();

}

void checkControles()
{
	cadera.setControl(analorRead(A0));
	hombro.setControl(analorRead(A1));
	codo.setControl(analorRead(A2));
	pinza.setControl(analorRead(A3));
	
}

void loop()
{

}

