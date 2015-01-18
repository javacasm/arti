#include "articulacion.h"


  
articulacion::articulacion(int pin,int minPos, int maxPos)
{
  	this.iMinPos=minPos;
  	this.iMaxPos=maxPos;
  	this.iPinServo=pin;

  	this.servo.attach(this.iPinServo);
}
  
  
void  articulacion::posicion(int iPos)
{
  	this.iPosicion=iPos;
  	this.servo.write(iPosicion);
}
 
