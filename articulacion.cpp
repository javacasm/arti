#include "articulacion.hpp"

class articulacion
{
  public:
  
  void articulacion(int pin,int minPos, int maxPos)
  {
  	this.iMinPos=minPos;
  	this.iMaxPos=maxPos;
  	this.iPinServo=pin;

  	this.servo=Servo();
  	this.servo.attach(this.iPinServo);
  }
  
  
  void  posicion(int iPos)
  {
  	this.iPosicion=iPos;
  	this.servo.write(iPosicion);
  }
 }
