#include <Servo.h>


class articulacion
{
protected:
  
  int iMinPos;
  int iMaxPos;
  int iPinServo;
  
  Servo servo;
 
 
  
  public:
  
  int iPosicion;
  articulacion(int pin,int minPos, int maxPos)
  {
      	iMinPos=minPos;
  	iMaxPos=maxPos;
  	iPinServo=pin;

  	servo.attach(iPinServo);

  };
  
  
  void  setPosicion(int iPos) {
  	iPosicion=iPos;
  	servo.write(iPosicion);
  };
  
};
