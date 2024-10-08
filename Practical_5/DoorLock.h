#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "Device.h"
#include <iostream>
using namespace std;
#include "LegacyDoorLock.h"

class DoorLock : public Device
{
    bool isLocked;
     LegacyDoorLock* doorlock;

public:
    DoorLock( LegacyDoorLock* door);
    void lock();
    void unlock();
    string getStatus();
   void performAction();
    std::string getDeviceType();
    ~DoorLock();
};

#endif