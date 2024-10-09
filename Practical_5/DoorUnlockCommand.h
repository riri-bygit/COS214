#ifndef DOORUNLOCKCOMMAND_H
#define DOORUNLOCKCOMMAND_H

#include <iostream>
#include "Command.h"
#include "DoorLock.h"

using namespace std;

/**
 * @brief Command class for unlocking a DoorLock device.
 */
class DoorUnlockCommand : public Command {
private:
    DoorLock *door; ///< Pointer to the DoorLock device.

public:
    /**
     * @brief Executes the unlock command on the door.
     */
    void execute();

    /**
     * @brief Constructor for DoorUnlockCommand.
     * @param doorUnlock Pointer to a DoorLock object to be unlocked.
     */
    DoorUnlockCommand(DoorLock *doorUnlock);
};

#endif // DOORUNLOCKCOMMAND_H
