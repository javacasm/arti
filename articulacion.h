#include <Servo.h>
#include <Arduino.h>

class articulacion
{
protected:
  
  int iMinControl;
  int iMaxControl;


  int iMinPos;
  int iMaxPos;
  int iPinServo;
  
  Servo servo;
 
  int iPosicion;

  public:
  
  
  articulacion(int pin,int minPos, int maxPos)
  {
    iMinControl=0;
    iMaxControl=1023;
    iMinPos=minPos;
  	iMaxPos=maxPos;
  	iPinServo=pin;

  	servo.attach(iPinServo);

  };
  
  int getMin()
  {return iMinPos;};

  int getMax()
  {return iMaxPos;};

  int setMiddle()
  {return setPosicion((iMinPos+iMaxPos)/2);};

  int convertControlToPosition(int iControl)
  {return map(iControl,iMinControl,iMaxControl,iMinPos,iMaxPos);};

  int setControl(int iControl)
  {return setPosicion(convertControlToPosition(iControl));};

  int setPosicion(int iPos) 
  {

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
