/**
 * @file DoorLockCommand.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the lock command on the door.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "DoorLockCommand.h"

/**
 * @brief Executes the lock command on the door.
 */
void DoorLockCommand::execute() {
    if (door) {
        door->lock();
    }
}

/**
 * @brief Constructor for DoorLockCommand.
 * @param doorlock Pointer to a DoorLock object to be locked.
 */
DoorLockCommand::DoorLockCommand(DoorLock *doorlock) : door(doorlock) {}
