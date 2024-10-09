/**
 * @file DoorLock.h
 * @author Paballo Diyase u23528142
 * @brief Door lock integrated with legacy door lock functionality
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

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
