#include "vex.h"
using namespace vex;

void punch(){
    if (Controller1.ButtonA.pressing()){
        puncher.spin(fwd,100,pct);
        wait(3000,ms);
        puncher.spin(reverse,100,pct);
        wait(3000,ms);
        puncher.stop();
    }
}
void intake();{
    if (Controller1.ButtonL2.pressing()){
        IMG.spin(fwd,100,pct);
    } else if (Controller1.ButtonL1.pressing()){
        IMG.spin(reverse,100,pct);
    } else {
        IMG.stop();
    }
}
void move_arm();{
    if (Controller1.ButtonUp.pressing()){
        arm.spin(fwd,85,pct);
    } else if (Controller1.ButtonDown.pressing()){
        arm.spin(reverse,85,pct);
    } else {
        arm.stop();
    }
}

void userControls(){
    punch();
    intake();
    move_arm();
}