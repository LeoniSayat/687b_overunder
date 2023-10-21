using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern controller Controller1;
extern inertial Gyro1;
extern motor puncher;
extern motor arm;
extern motor_group LMG;
extern motor_group RMG;
extern motor_group InMG;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );