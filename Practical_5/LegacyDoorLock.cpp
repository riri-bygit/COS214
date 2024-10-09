/**
 * @file LegacyDoorLock.cpp
 * @author Paballo Diyase u23528142
 * @brief Legarcy lock
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "LegacyDoorLock.h"

/**
 * @brief Default constructor initializes the door lock state.
 */
LegacyDoorLock::LegacyDoorLock() : isLocked(false), securityLevel(3), requiresMaintenance(false) {}

/**
 * @brief Locks the door.
 * Prevents locking if maintenance is required.
 */
void LegacyDoorLock::lockDoor() {
    if (requiresMaintenance) {
        cout << "Door requires maintenance and cannot be locked." << endl;
    } else {
        isLocked = true;
        cout << "Door is now locked. Security level: " << securityLevel << endl;
    }
}

/**
 * @brief Unlocks the door.
 */
void LegacyDoorLock::unlockDoor() {
    if (isLocked) {
        isLocked = false;
        cout << "Door is now unlocked." << endl;
    } else {
        cout << "Door is already unlocked." << endl;
    }
}

/**
 * @brief Checks if the door is currently locked.
 * @return True if the door is locked, false otherwise.
 */
bool LegacyDoorLock::isDoorLocked() {
    return isLocked;
}

/**
 * @brief Sets the security level of the door lock.
 * @param level Security level (must be between 1 and 5).
 */
void LegacyDoorLock::setSecurityLevel(int level) {
    if (level < 1 || level > 5) {
        cout << "Invalid security level. Must be between 1 and 5." << endl;
    } else {
        securityLevel = level;
        cout << "Security level set to " << securityLevel << endl;
    }
}

/**
 * @brief Reports a maintenance issue for the door lock.
 */
void LegacyDoorLock::reportMaintenanceIssue() {
    requiresMaintenance = true;
    cout << "Maintenance issue reported. Lock requires servicing." << endl;
}

/**
 * @brief Resolves the reported maintenance issue.
 */
void LegacyDoorLock::resolveMaintenanceIssue() {
    requiresMaintenance = false;
    cout << "Maintenance issue resolved. Lock is operational." << endl;
}
