/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\687B                                             */
/*    Created:      Mon Jun 20 2022                                           */
/*    Description:  TESTING TESTINGTESTING                                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/
// I have been here from the beginning
// haha! i took over!
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// visionSens           vision        3               
// ---- END VEXCODE CONFIGURED DEVICES ----

// ---------- Brain's Working Ports ----------
// Port Number:
// [Port Number]        [Work]
// Port 1 - 2           False (ApplY Downward Pressure)
// Port 3 - 4           True
// Port 5               False (Permantly Damage?)
// Port 6               False (Apply Downward Pressure)
// Port 7               True
// Port 8 - 10          False (Apply Downward Pressure)
// Port 12 - 19         True
// Motor 20             False (Permantly Damage?)
// ---------- End of Brain Report ----------

/*
  Odometry and Movement Code has been heavily influenced by the codes and ideas of
  4253B-Offseason-X-Drive
  which can be found at:
  https://github.com/Yessir120/4253B-Offseason-X-Drive  

  The concepts that goes into a X-Drive
  - https://youtu.be/KIkDvYGDCEs 

  Additional Resources: 
  - https://www.robotmesh.com/studio/content/docs/vexv5-cpp//html/index.html 
  - https://pros.cs.purdue.edu/v5/api/c/motors.html#motor-brake-mode-e-t
*/

#include "vex.h"
#include <string>

using namespace vex;

// A global instance of competition
competition Competition;

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
}


void drivercontrol(void){
 // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();


  // Main loop
  while (true) {
    Functions::driveControl();
    UserControlledFunctions::userControls();
    wait(10, msec);
  }
}

int main() {
  //Set up callbacks for autonomous and driver control periods. 
  Competition.autonomous(autonomous); 
  Competition.drivercontrol(drivercontrol); 
  
  //Prevent main from exiting with an infinite loop
  while (true) {
    wait(10, msec); 
  
  }
}
