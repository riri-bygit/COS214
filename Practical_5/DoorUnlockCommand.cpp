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
