#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"
#include <iostream>
using namespace std;

class Light : public Device
{
    bool isOn;

public:
    string getStatus();
    void performAction();
    std::string getDeviceType();
    Light();
    ~Light();
   
};

#endif