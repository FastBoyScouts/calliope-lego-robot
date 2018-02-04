
#include "CalliopeRobot.h"
#include "MicroBit.h"
#include "CalliopeRGB.h"
#include "CalliopeSoundMotor.h"
#include <array>
#include <stdlib.h>

#ifdef CALLIOPE_ROBOT_STATIC

MicroBit uBit;


int initTime = uBit.systemTime();

void staticEight() {
        while ( true ) {
            if ( uBit.buttonA.isPressed() ) {
                uBit.sleep(1000);
                uBit.soundmotor.motorAOn(60);
                uBit.sleep(1000);
                uBit.soundmotor.motorAOff();
                uBit.soundmotor.motorBOn(100);
                uBit.sleep(1000);
                uBit.soundmotor.motorAOn(100);
                uBit.sleep(2000);
                uBit.soundmotor.motorBOff();
                uBit.soundmotor.motorAOff();
                uBit.sleep(1000);
                uBit.soundmotor.motorAOn(80);
                uBit.soundmotor.motorBOn(50);
                uBit.sleep(3000);
                uBit.soundmotor.motorAOff();
                uBit.sleep(500);
                uBit.soundmotor.motorBOff();
                uBit.sleep(2000);
            }
            uBit.sleep(1);
        }
}

int main()
{
    uBit.init();
    staticEight();
    release_fiber();
}

#endif
