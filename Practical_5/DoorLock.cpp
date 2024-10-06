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

void DoorLock::performAction()
{
    isLocked = !isLocked;
}

std::string getDeviceType()
{
    return "DoorLock\n";
}
