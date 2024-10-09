/**
 * @file SetTemperature.h
 * @author Paballo Diyase u23528142
 * @brief Command to set the temperature in a room.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef SETTEMPERATURE_H
#define SETTEMPERATURE_H

#include <iostream>
#include "Command.h"
#include "Room.h"

/**
 * @class SetTemperature
 * @brief Command to set the temperature in a room.
 */
class SetTemperature : public Command
{
    Room *room; ///< Pointer to the room where the temperature will be set.

public:
    /**
     * @brief Executes the command to set the temperature in the room.
     */
    void execute();

    /**
     * @brief Constructor for SetTemperature.
     * @param room Pointer to the Room object.
     */
    SetTemperature(Room *room);
};

#endif // SETTEMPERATURE_H
