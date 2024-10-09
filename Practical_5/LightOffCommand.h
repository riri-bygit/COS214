#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include <iostream>
#include "Command.h"
#include "Light.h"

/**
 * @brief A command to turn off the light.
 * 
 * This class implements the Command interface to turn off a light.
 */
class LightOffCommand : public Command
{
private:
    Light *light; ///< Pointer to the Light object.

public:
    /**
     * @brief Executes the command to turn off the light.
     */
    void execute();

    /**
     * @brief Constructor to initialize the LightOffCommand with a Light object.
     * 
     * @param light Pointer to the Light object.
     */
    LightOffCommand(Light *light);
};

#endif // LIGHTOFFCOMMAND_H
