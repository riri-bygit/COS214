#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H

#include "Sensor.h"

class SmokeDetector : public Sensor {
private:
    bool smokeDetected;

public:
    SmokeDetector();
    void update() override; // Override update method
    string getStatus() override; // Override getStatus method
};

#endif // SMOKEDETECTOR_H

