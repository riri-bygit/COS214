#ifndef DoorLockCommand_H
#define DoorLockCommand_H
#include <iostream>
#include "Command.h"
#include "DoorLock.h"
using namespace std;
class DoorLockCommand : public Command
{
    DoorLock *door;

public:
    void execute();
    DoorLockCommand(DoorLock *door);
};

#endif