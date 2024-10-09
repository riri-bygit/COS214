#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H

#include <iostream>
#include "Command.h"
#include "Room.h"

/**
 * @brief A command to lock all doors in a room.
 * 
 * This class implements the Command interface to lock all doors in a room.
 */
class LockAllDoors : public Command
{
private:
    Room *room; ///< Pointer to the Room object.

public:
    /**
     * @brief Executes the command to lock all doors in the room.
     */
    void execute();

    /**
     * @brief Constructor to initialize the LockAllDoors command with a Room object.
     * 
     * @param room Pointer to the Room object.
     */
    LockAllDoors(Room *room);
};

#endif // LOCKALLDOORS_H
