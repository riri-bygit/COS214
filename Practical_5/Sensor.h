#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
using namespace std;

class Sensor {
public:
    virtual void update() = 0; // Pure virtual function for updating the sensor
    virtual string getStatus() = 0; // Method to get the status of the sensor
    virtual ~Sensor() {} // Virtual destructor
};

#endif // SENSOR_H

