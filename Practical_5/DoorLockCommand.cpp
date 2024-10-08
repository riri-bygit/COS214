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
