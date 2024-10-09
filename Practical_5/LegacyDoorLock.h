/**
 * @file LegacyDoorLock.h
 * @author Paballo Diyase u23528142
 * @brief Legacy door lock with basic functionalities.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H

#include <iostream>

using namespace std;

/**
 * @brief Class representing a legacy door lock with basic functionalities.
 */
class LegacyDoorLock {
private:
    bool isLocked; ///< Indicates whether the door is locked.
    int securityLevel; ///< Security level of the door (1-5).
    bool requiresMaintenance; ///< Indicates if the door requires maintenance.

public:
    /**
     * @brief Default constructor initializes the door lock state.
     */
    LegacyDoorLock();

    /**
     * @brief Locks the door.
     * Prevents locking if maintenance is required.
     */
    void lockDoor();

    /**
     * @brief Unlocks the door.
     */
    void unlockDoor();

    /**
     * @brief Checks if the door is currently locked.
     * @return True if the door is locked, false otherwise.
     */
    bool isDoorLocked();

    /**
     * @brief Sets the security level of the door lock.
     * @param level Security level (must be between 1 and 5).
     */
    void setSecurityLevel(int level);

    /**
     * @brief Reports a maintenance issue for the door lock.
     */
    void reportMaintenanceIssue();

    /**
     * @brief Resolves the reported maintenance issue.
     */
    void resolveMaintenanceIssue();
};

#endif // LEGACYDOORLOCK_H
