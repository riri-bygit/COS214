/**
 * @file Device.h
 * @brief Header file defining the Device interface.
 */

#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
using namespace std;

/**
 * @class Device
 * @brief An abstract class that represents a generic smart device.
 * 
 * This class serves as a base class for all smart devices. It defines the basic functionality
 * that all devices must implement, such as performing actions and providing status updates.
 */

class Device
{
public:
    virtual void performAction() = 0;
    virtual std::string getStatus() = 0;
    virtual void performAction() = 0;
    virtual std::string getDeviceType() = 0;
    virtual ~Device();
};

#endif // DEVICE_H
