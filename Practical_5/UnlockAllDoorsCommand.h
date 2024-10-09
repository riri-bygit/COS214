#ifndef UnlockAllDoorsCommand_H
#define UnlockAllDoorsCommand_H
#include <iostream>
#include "Command.h"
#include "Room.h"
using namespace std;
class UnlockAllDoorsCommand : public Command
{
    Room *room;

public:
    void execute();
    UnlockAllDoorsCommand(Room *room);
};

#endif