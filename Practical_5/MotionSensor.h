
#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"

class MotionSensor : public Sensor {
private:
    bool motionDetected;

public:
    MotionSensor();
    void update() override; // Override update method
    string getStatus() override; // Override getStatus method
};

#endif // MOTIONSENSOR_H
