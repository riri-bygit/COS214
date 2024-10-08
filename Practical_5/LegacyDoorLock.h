#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H

#include <iostream>
using namespace std;

class LegacyDoorLock {
private:
    bool isLocked;
    int securityLevel; // 1-5, where 5 is highest security
    bool requiresMaintenance;

public:
    LegacyDoorLock();
    void lockDoor();
    void unlockDoor();
    bool isDoorLocked();
    void setSecurityLevel(int level);
    void reportMaintenanceIssue();
    void resolveMaintenanceIssue();
};

#endif // LEGACYDOORLOCK_H
