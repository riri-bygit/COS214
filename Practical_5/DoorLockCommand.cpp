#include "DoorLockCommand.h"
void DoorLockCommand::execute()
{
    if (door)
    {
        door->lock();
    }
}

DoorLockCommand::DoorLockCommand(DoorLock *doorlock) : door(doorlock) {}