#include <Servo.h>

class articulacion
{

  public:
  
  int iPosicion;
  articulacion(int pin,int minPos, int maxPos);
  void  posicion(int iPos);
  
  
protected:
  
  int iMinPos;
  int iMaxPos;
  int iPinServo;
  
  Servo servo;

};
