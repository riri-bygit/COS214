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