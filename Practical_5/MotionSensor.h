#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"
#include "Room.h"    // Include Room header
#include "Command.h" // Include Command header

class MotionSensor : public Sensor
{
private:
    bool motionDetected;
    Room *room; // Pointer to the Room object

public:
    MotionSensor(Room *r);
    void update() override;      // Override update method
    string getStatus() override; // Override getStatus method
    ~MotionSensor();
};

#endif // MOTIONSENSOR_H
