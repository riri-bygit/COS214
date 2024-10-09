/**
 * @file DoorUnlockCommand.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the unlock command on the door.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "DoorUnlockCommand.h"

/**
 * @brief Executes the unlock command on the door.
 * If the door is available, it calls the unlock method of the DoorLock.
 */
void DoorUnlockCommand::execute() {
    if (door) {
        door->unlock();
    }
}

/**
 * @brief Constructor for DoorUnlockCommand.
 * Initializes the command with a DoorLock object to be unlocked.
 * @param doorUnlock Pointer to a DoorLock object.
 */
DoorUnlockCommand::DoorUnlockCommand(DoorLock *doorUnlock) : door(doorUnlock) {}
