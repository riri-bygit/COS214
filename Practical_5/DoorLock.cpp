#include "DoorLock.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock(LegacyDoorLock *door) : doorlock(door)
{
    isLocked = false;
} // Initialize as unlocked
string DoorLock::getStatus()
{
    if (isLocked)
    {
        return "DoorLock is Locked\n";
    }
    else
    {
       return "DoorLock is Unlocked\n";
    }
}

std::string DoorLock::getDeviceType()
{
    return "DoorLock\n";
}
void DoorLock::lock()
{
    if (!isLocked)
    {
        isLocked = true;
    }
    getStatus();
}
void DoorLock::unlock()

{
    if (isLocked)
    {
        isLocked = false;
    }
    getStatus();
}

void DoorLock::performAction()
{
    isLocked = !isLocked;
}

DoorLock::~DoorLock()
{

}