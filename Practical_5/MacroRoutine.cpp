
#include "MacroRoutine.h" // Assuming we have a base Command class as part of the command pattern

// Constructor
MacroRoutine::MacroRoutine() {}

// Destructor
MacroRoutine::~MacroRoutine() {
    
    for (Command* command : commands) {
        delete command; 
    }
    commands.clear();
}

// Add a command to the macro
void MacroRoutine::addCommand(Command* command) {
    commands.push_back(command);
}

// Remove a command from the macro
void MacroRoutine::removeCommand(Command* command) {
    auto it = std::find(commands.begin(), commands.end(), command);
    if (it != commands.end()) {
        commands.erase(it);
    }
}

// Execute all commands in the macro routine
void MacroRoutine::execute() {
    for (Command* command : commands) {
        command->execute(); // Execute each command in the list
    }
}
