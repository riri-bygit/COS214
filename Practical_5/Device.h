#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
using namespace std;
/**
 * @brief Abstract base class representing a smart device.
 * 
 * The Device class defines a common interface for all devices.
 */
class Device
{
public:
    virtual std::string getStatus() = 0;
    virtual void performAction() = 0;
    virtual std::string getDeviceType() = 0;
    virtual ~Device() = default;
};

#endif