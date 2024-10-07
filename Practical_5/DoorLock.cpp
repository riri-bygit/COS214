#include "DoorLock.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock() : isLocked(false) {} // Initialize as unlocked
string DoorLock::getStatus()
{
    if (isLocked)
    {
        cout << "DoorLock is Locked" << endl;
    }
    else
    {
        cout << "DoorLock is Unlocked" << endl;
    }
}

std::string getDeviceType()
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