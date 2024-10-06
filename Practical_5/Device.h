#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
using namespace std;

class Device
{
public:
    virtual std::string getStatus() = 0;
    virtual void performAction() = 0;
    virtual std::string getDeviceType() = 0;
    virtual ~Device();
};

#endif