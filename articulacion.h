#include <Servo.h>


class articulacion
{
protected:
  
  int iMinPos;
  int iMaxPos;
  int iPinServo;
  
  Servo servo;
 
  int iPosicion;
  
  public:
  
  
  articulacion(int pin,int minPos, int maxPos)
  {
    iMinPos=minPos;
  	iMaxPos=maxPos;
  	iPinServo=pin;

  	servo.attach(iPinServo);

  };
  
  
  int setMiddle()
  {return setPosicion((iMinPos+iMaxPos)/2);};

  int setPosicion(int iPos) {

  	if((iPos<iMaxPos)&&(iPos>iMinPos))
  	{
  		iPosicion=iPos;
  		servo.write(iPosicion);
  	}

  	return iPosicion;
  };
  
  int getPosicion()
  {return iPosicion;};
};
