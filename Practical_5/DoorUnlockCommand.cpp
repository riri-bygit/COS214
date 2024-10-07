#include "DoorUnlockCommand.h"
void DoorUnlockCommand::execute()
{
    if (door)
    {
        door->unlock();
    }
}

DoorUnlockCommand::DoorUnlockCommand(DoorLock *doorUnlock) : door(doorUnlock) {}