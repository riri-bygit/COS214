/**
 * @file MacroRoutine.h
 * @author Paballo Diyase u23528142
 * @brief A macro command that holds a sequence of commands.
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include "Command.h"
#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief A macro command that holds a sequence of commands.
 * 
 * This class implements a macro command that can execute multiple commands.
 */
class MacroRoutine : public Command
{
private:
    std::vector<Command *> commands; ///< Holds the list of commands.

public:
    /**
     * @brief Constructor to initialize an empty MacroRoutine.
     */
    MacroRoutine();

    /**
     * @brief Destructor to delete all commands in the macro.
     */
    ~MacroRoutine();

    /**
     * @brief Adds a command to the macro.
     * 
     * @param command Pointer to the command to be added.
     */
    void addCommand(Command *command);

    /**
     * @brief Removes a command from the macro.
     * 
     * @param command Pointer to the command to be removed.
     */
    void removeCommand(Command *command);

    /**
     * @brief Executes all commands in the macro.
     */
    void execute() override;
};

#endif // MACROROUTINE_H
