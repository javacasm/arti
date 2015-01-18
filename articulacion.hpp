class arti
{
  private:
  
  int iMinPos;
  int iMaxPos;
  int iPinServo;
  
  Servo servo;
  public:
  
  int iPosicion;
  arti(int pin,int minPos, int maxPos);
  
  
 void  posicion(int iPos);
}