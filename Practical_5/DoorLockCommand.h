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
