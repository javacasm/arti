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
  int iControl;
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

  int changePosicion(int iControl)
  {	int delta=iControl-(iMaxControl-iMinControl)/2;
  	setPosicion(iPosicion+delta/4);}
  int convertControlToPosition(int iControl)
  {return map(iControl,iMinControl,iMaxControl,iMinPos,iMaxPos);};

  int setControl(int iControl)
  {return setPosicion(convertControlToPosition(iControl));};
  
  void infoPosition()
  {  Serial.print(iPinServo);
     Serial.print(",");
     Serial.println(iPosicion);
  }
  
  int setPosicion(int iPos) 
  {
     if(iPos!=iPosicion)
     {
  	if((iPos<iMaxPos)&&(iPos>iMinPos))
  	{
  		iPosicion=iPos;
  		servo.write(iPosicion);
                infoPosition();
                
  	}
     }
     return iPosicion;
  };
  
  int getPosicion()
  {return iPosicion;};
};
