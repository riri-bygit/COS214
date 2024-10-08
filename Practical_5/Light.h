#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"
#include <iostream>
using namespace std;
#include "LegacyLight.h"

class Light : public Device
{
    bool isOn;
    LegacyLight* light;

public:
    string getStatus();
    void performAction();
    void turnOn();
    void turnOff();
    std::string getDeviceType();
    Light( LegacyLight* light);
    ~Light();
   
};

#endif