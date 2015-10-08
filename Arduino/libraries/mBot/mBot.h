///@file Makeblock.h head file of Makeblock Library V2.1.0625
///Define the interface of Makeblock Library

#ifndef mBot_h
#define mBot_h

#include "MePort.h"
#include "MeDCMotor.h"
#include "MeRGBLed.h"
#include "MeUltrasonic.h"
#include "MeInfraredReceiver.h"
#include "MeBuzzer.h"
#include "MeLineFollower.h"

class MBot {
public:
    MBot();
    MeRGBLed *led;
    MeUltrasonic *ultrasonic;
    MeLineFollower *linefollower;
    MeBuzzer *buzzer;
    MeDCMotor *motorL;
    MeDCMotor *motorR;
};

#endif
