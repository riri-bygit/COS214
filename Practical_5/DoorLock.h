#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "Device.h"
#include <iostream>
using namespace std;

class DoorLock : public Device
{
    bool isLocked;

public:
    DoorLock();
    string getStatus();
    void performAction();
    std::string getDeviceType();
    ~DoorLock();
};

#endif