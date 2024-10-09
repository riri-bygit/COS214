/**
 * @file LightOnCommand.h
 * @author Paballo Diyase u23528142
 * @brief A command to turn on the light.
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include <iostream>
#include "Command.h"
#include "Light.h"

/**
 * @brief A command to turn on the light.
 * 
 * This class implements the Command interface to turn on a light.
 */
class LightOnCommand : public Command
{
private:
    Light *light; ///< Pointer to the Light object.

public:
    /**
     * @brief Executes the command to turn on the light.
     */
    void execute();

    /**
     * @brief Constructor to initialize the LightOnCommand with a Light object.
     * 
     * @param light Pointer to the Light object.
     */
    LightOnCommand(Light *light);
};

#endif // LIGHTONCOMMAND_H
