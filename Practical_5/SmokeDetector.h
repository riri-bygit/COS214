#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H

#include "Sensor.h"
#include "Room.h" // Include Room header
#include "Command.h" // Include Command header

class SmokeDetector : public Sensor {
private:
    bool smokeDetected;
    Room* room; // Pointer to the Room object
    Command* lockAllDoorsCommand; // Command to lock all doors

public:
    SmokeDetector(Room* r, Command* command);
    void update() override; // Override update method
    string getStatus() override; // Override getStatus method
     ~SmokeDetector();
};

#endif // SMOKEDETECTOR_H
