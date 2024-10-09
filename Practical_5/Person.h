#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include "Room.h"
#include "MacroRoutine.h"

class Person
{
private:
    std::string name;
    std::vector<Room *> rooms;  // List of rooms in the house
    MacroRoutine *macroRoutine; // Macro routine for the person

public:
    Person(const std::string &name);
    ~Person();
    void addRoom(Room *room);
    void buildRoom();
    void moveToRoom(Room *room);
    void executeCommandInRoom(Room *room, Command *command);
    void createMacroRoutine();
    void executeMacroRoutine();
    string getName();
    void showRooms(); // Display the list of rooms
};

#endif // PERSON_H
