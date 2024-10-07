#include "Command.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class MacroRoutine : public Command
{
private:
    std::vector<Command *> commands; // Holds the list of commands

public:
    MacroRoutine();  // Constructor
    ~MacroRoutine(); // Destructor

    void addCommand(Command *command);    // Add a command to the macro
    void removeCommand(Command *command); // Remove a command from the macro
    void execute() override;              // Execute all commands in the macro
};