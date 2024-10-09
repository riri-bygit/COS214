#include "LockAllDoors.h"

/**
 * @brief Executes the command to lock all doors in the room.
 * 
 * Checks if the room object is valid and calls the LockAllDors method.
 */
void LockAllDoors::execute()
{
    if (room)
    {
        room->LockAllDors();
    }
}

/**
 * @brief Constructs a LockAllDoors command with the specified Room object.
 * 
 * @param room Pointer to a Room object.
 */
LockAllDoors::LockAllDoors(Room *room) : room(room)
{
}
