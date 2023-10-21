#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
//inertial inertialSensors = inertial(PORT5);

inertial Gyro1 = inertial(PORT10);

motor puncher = motor(PORT1, ratio6_1, false);
motor arm = motor(PORT1, ratio6_1, false);

motor InMGL = motor(PORT5, ratio6_1, true);
motor InMGR = motor(PORT5, ratio6_1, false);
motor_group InMG = motor_group(InMGL, InMGR);

motor LMGMotorA = motor(PORT19, ratio18_1, true); // reversed 12/30
motor LMGMotorB = motor(PORT20, ratio18_1, true); // reversed 12/30
motor_group LMG = motor_group(LMGMotorA, LMGMotorB);

motor RMGMotorA = motor(PORT12, ratio18_1, false); // reversed 12/30
motor RMGMotorB = motor(PORT15, ratio18_1, false); // reversed 12/30
motor_group RMG = motor_group(RMGMotorA, RMGMotorB);

bool RemoteControlCodeEnabled = true;

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
