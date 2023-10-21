#include "vex.h"

using namespace vex;

// Movement Function 
void Functions::setVolt(double AxisOne, double AxisTwo) {
  /*
    Sets the motor voltage as another way to run the motors
  */
  LMG.spin(fwd, AxisTwo, volt);        RMG.spin(fwd, AxisOne, volt);
}

void Functions::driveControl(){
  /*
    The function that controls the user movement of the bot
  */
  setStop(coast);
  double AxisDrive = -Controller1.Axis2.position() * 2;
  double AxisRot = -Controller1.Axis4.position() * 2; //reversed 3.4.23

  // Deadzones
  if(abs(Controller1.Axis2.position()) < 5) {AxisDrive = 0;}
  if(abs(Controller1.Axis4.position()) < 5) {AxisRot = 0;}

  double setRMG = -(AxisDrive + AxisRot); //reversed??
  double setLMG = -(AxisDrive - AxisRot); //reversed?? lets try it out 1/12
  
    setVel(setLMG,setRMG);
}