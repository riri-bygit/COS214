/**
 * @file DoorLock.cpp
 * @author Paballo Diyase u23528142
 * @brief Smart door lock, also adapts legacy locks to be smart
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "DoorLock.h"
#include <iostream>
using namespace std;

/**
 * @brief Constructor for DoorLock that initializes with a legacy door lock.
 * @param door LegacyDoorLock object for integration.
 */
DoorLock::DoorLock(LegacyDoorLock *door) : doorlock(door), isLocked(false) {}

/**
 * @brief Returns the lock status of the door.
 * @return "Locked" or "Unlocked" status as a string.
 */
std::string DoorLock::getStatus() {
    return isLocked ? "DoorLock is Locked\n" : "DoorLock is Unlocked\n";
}

/**
 * @brief Returns the type of the device as "DoorLock".
 * @return Device type as a string.
 */
std::string DoorLock::getDeviceType() {
    return "DoorLock\n";
}

/**
 * @brief Locks the door if it's unlocked.
 */
void DoorLock::lock() {
    if (!isLocked) {
        isLocked = true;
    }
    getStatus();
}

/**
 * @brief Unlocks the door if it's locked.
 */
void DoorLock::unlock() {
    if (isLocked) {
        isLocked = false;
    }
    getStatus();
}

/**
 * @brief Toggles the lock state of the door.
 */
void DoorLock::performAction() {
    isLocked = !isLocked;
}

/**
 * @brief Destructor for DoorLock.
 */
DoorLock::~DoorLock() {}
