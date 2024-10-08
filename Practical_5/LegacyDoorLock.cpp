#include "LegacyDoorLock.h"

LegacyDoorLock::LegacyDoorLock() : isLocked(false), securityLevel(3), requiresMaintenance(false) {}

void LegacyDoorLock::lockDoor()
{
    if (requiresMaintenance)
    {
        cout << "Door requires maintenance and cannot be locked." << endl;
    }
    else
    {
        isLocked = true;
        cout << "Door is now locked. Security level: " << securityLevel << endl;
    }
}

void LegacyDoorLock::unlockDoor()
{
    if (isLocked)
    {
        isLocked = false;
        cout << "Door is now unlocked." << endl;
    }
    else
    {
        cout << "Door is already unlocked." << endl;
    }
}

bool LegacyDoorLock::isDoorLocked()
{
    return isLocked;
}

void LegacyDoorLock::setSecurityLevel(int level)
{
    if (level < 1 || level > 5)
    {
        cout << "Invalid security level. Must be between 1 and 5." << endl;
    }
    else
    {
        securityLevel = level;
        cout << "Security level set to " << securityLevel << endl;
    }
}

void LegacyDoorLock::reportMaintenanceIssue()
{
    requiresMaintenance = true;
    cout << "Maintenance issue reported. Lock requires servicing." << endl;
}

void LegacyDoorLock::resolveMaintenanceIssue()
{
    requiresMaintenance = false;
    cout << "Maintenance issue resolved. Lock is operational." << endl;
}
