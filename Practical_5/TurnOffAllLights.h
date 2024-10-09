/**
 * @file TurnOffAllLights.h
 * @author Paballo Diyase u23528142
 * @brief Concrete command to turn off all lights in a room.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H

#include <iostream>
#include "Command.h"
#include "Room.h"

/**
 * @class TurnOffAllLights
 * @brief Concrete command to turn off all lights in a room.
 */
class TurnOffAllLights : public Command
{
private:
    Room *room; ///< Pointer to the room in which to turn off all lights.

public:
    /**
     * @brief Executes the command to turn off all lights in the room.
     */
    void execute() override;

    /**
     * @brief Constructs the TurnOffAllLights command with a room.
     * @param room Pointer to the Room object.
     */
    TurnOffAllLights(Room *room);
};

#endif // TURNOFFALLLIGHTS_H
