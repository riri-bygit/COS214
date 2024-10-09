/**
 * @file DoorLockCommand.h
 * @author Paballo Diyase u23528142
 * @brief Command class for locking a DoorLock device.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef DoorLockCommand_H
#define DoorLockCommand_H
#include "Command.h"
#include "DoorLock.h"

/**
 * @brief Command class for locking a DoorLock device.
 */
class DoorLockCommand : public Command {
private:
    DoorLock *door; ///< Pointer to the DoorLock device.

public:
    void execute();
    DoorLockCommand(DoorLock *door);
};

#endif // DoorLockCommand_H
