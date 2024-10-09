/**
 * @file MacroRoutine.cpp
 * @author Paballo Diyase u23528142
 * @brief Constructs an empty MacroRoutine.
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include "MacroRoutine.h"

/**
 * @brief Constructs an empty MacroRoutine.
 */
MacroRoutine::MacroRoutine() {}

/**
 * @brief Destroys the MacroRoutine and its commands.
 * 
 * Deletes all commands in the macro.
 */
MacroRoutine::~MacroRoutine() 
{
    for (Command* command : commands) 
    {
        delete command;
    }
    commands.clear();
}

/**
 * @brief Adds a command to the macro.
 * 
 * @param command Pointer to the command to be added.
 */
void MacroRoutine::addCommand(Command* command) 
{
    commands.push_back(command);
}

/**
 * @brief Removes a command from the macro.
 * 
 * @param command Pointer to the command to be removed.
 */
void MacroRoutine::removeCommand(Command* command) 
{
    auto it = std::find(commands.begin(), commands.end(), command);
    if (it != commands.end()) 
    {
        commands.erase(it);
    }
}

/**
 * @brief Executes all commands in the macro.
 * 
 * Iterates through the list of commands and executes each one.
 */
void MacroRoutine::execute() 
{
    for (Command* command : commands) 
    {
        command->execute();
    }
}
