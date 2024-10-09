/**
 * @file DoorUnlockCommand.h
 * @author Paballo Diyase u23528142
 * @brief Command class for unlocking a DoorLock device.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */


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
