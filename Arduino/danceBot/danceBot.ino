#include <Wire.h>
#include <SoftwareSerial.h>
#include <mBot.h>

#define SPEED                 100    /* Between 0 and 255 */
#define ROTATION_DURATION     1000   /* Milliseconds */
#define FORWARD_DURATION      2000   /* Milliseconds */

MBot *mBot;

void setup()
{
    mBot = new MBot();
}

void loop()
{
    // The mBot robot will rotate on the right, go forward and return
    // to its original position. Then it will do these 3 steps 5 times.
    static int index = 0;
    if (index > 10) {
        return;
    }

    // Rotate
    mBot->led->setColor(10, 0, 0);
    mBot->motorL->run(SPEED);
    mBot->motorR->run(-SPEED);
    delay(ROTATION_DURATION);

    // Forward
    mBot->led->setColor(0, 10, 0);
    mBot->motorL->run(SPEED);
    mBot->motorR->run(SPEED);
    delay(FORWARD_DURATION);

    // Backward
    mBot->led->setColor(0, 0, 10);
    mBot->motorL->run(-SPEED);
    mBot->motorR->run(-SPEED);
    delay(FORWARD_DURATION);
    
    mBot->motorL->stop();
    mBot->motorR->stop();
    index += 1;
}



