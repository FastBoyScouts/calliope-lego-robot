
#include "CalliopeRobot.h"
#include "MicroBit.h"
#include "CalliopeRGB.h"
#include "CalliopeSoundMotor.h"
#include <array>
#include <stdlib.h>

#ifdef CALLIOPE_ROBOT_STATIC

MicroBit uBit;


int initTime = uBit.systemTime();

int main()
{
    uBit.init();

    //uBit.rgb.setColour(MicroBitColor(255, 0, 0, 255));
    uBit.display.setDisplayMode(DISPLAY_MODE_GREYSCALE);
    uBit.display.print(MicroBitImage("255,255,255,255,255\n255,0,0,0,255\n255,0,0,0,255\n255,0,0,0,255\n255,255,255,255,255\n"));
    while ( true ) {
        if ( uBit.buttonA.isPressed() ) {
            uBit.soundmotor.motorAOn(60);
            uBit.soundmotor.motorBOn(60);
            uBit.sleep(1000);
            uBit.soundmotor.motorAOff();
            uBit.sleep(1000);
            uBit.soundmotor.motorBOff();
            uBit.soundmotor.motorAOn(60);
            uBit.sleep(1000);
            uBit.soundmotor.motorBOn(60);
            uBit.sleep(1000);
            uBit.soundmotor.motorAOff();
            uBit.soundmotor.motorBOff();
            uBit.sleep(1000);
        }
        uBit.sleep(1);
    }
    release_fiber();
}

#endif
