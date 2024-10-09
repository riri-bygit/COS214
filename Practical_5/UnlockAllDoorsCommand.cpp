
#include "UnlockAllDoors.h"
void UnlockAllDoorsCommand::execute()
{
    if (room)
    {
        room->UnlockAllDoors();
    }
}
UnlockAllDoorsCommand::UnlockAllDoorsCommand(Room *room) : room(room)
{
}