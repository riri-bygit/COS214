#ifndef DoorUnlockCommand_H
#define DoorUnlockCommand_H
#include <iostream>
#include "Command.h"
#include "DoorLock.h"
using namespace std;
class DoorUnlockCommand : public Command
{
    DoorLock *door;

public:
    void execute();
    DoorUnlockCommand(DoorLock *door);
};

#endif