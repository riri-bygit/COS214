#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "Device.h"
#include "LegacyDoorLock.h"

/**
 * @brief Class representing a door lock integrated with legacy door lock functionality.
 */
class DoorLock : public Device {
private:
    bool isLocked; ///< Indicates whether the door is locked.
    LegacyDoorLock* doorlock; ///< Legacy door lock integration.

public:
    DoorLock(LegacyDoorLock* door);
    void lock();
    void unlock();
    std::string getStatus();
    void performAction();
    std::string getDeviceType();
    ~DoorLock();
};

#endif // DOORLOCK_H
