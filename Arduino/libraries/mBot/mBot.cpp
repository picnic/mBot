#include "mBot.h"

Board_type MakeblockBoard = mCore;

MePort_Sig mePort[11]={{NC, NC}, {11, 12}, {9, 10}, {A2, A3}, {A0, A1},
    {6, 7}, {5, 4}, {A7, 13}, {8, A6}, {6, 7}, {5, 4}};


MBot::MBot() {
    ultrasonic = new MeUltrasonic(PORT_3);
    linefollower = new MeLineFollower(PORT_2);
    led = new MeRGBLed();
    motorL = new MeDCMotor(M1);
    motorR = new MeDCMotor(M2);
}
