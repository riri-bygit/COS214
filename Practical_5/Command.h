/**
 * @file Command.h
 * @author Paballo Diyase u23528142
 * @brief Command.h files
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef Command_H
#define Command_H
#include <iostream>
#include "Device.h"
using namespace std;

/**
 * @brief Abstract base class for commands.
 * 
 * This class defines the interface for all commands in the system.
 */
class Command
{

public:
    virtual void execute() = 0;// Pure virtual method for execution
    /**
     * @brief Virtual destructor to ensure proper cleanup of derived classes.
     */
    virtual ~Command() {}// Virtual destructor
};

#endif // COMMAND_H