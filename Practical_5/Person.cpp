#include "Person.h"

Person::Person(const std::string &name) : name(name), macroRoutine(nullptr) {}

Person::~Person()
{
    // Clean up dynamically allocated rooms and macroRoutine if necessary
    for (Room *room : rooms)
    {
        delete room;
    }
    delete macroRoutine;
}

void Person::buildRoom()
{
    Room *newRoom = new Room("Living Room"); // For example, create a living room
    rooms.push_back(newRoom);
    std::cout << name << " built a " << newRoom->getName() << std::endl;
}

void Person::moveToRoom(Room *room)
{
    std::cout << name << " moved to " << room->getName() << std::endl;
}

void Person::executeCommandInRoom(Room *room, Command *command)
{
    std::cout << name << " is executing a command in " << room->getName() << std::endl;
    command->execute();
}

void Person::createMacroRoutine()
{
    macroRoutine = new MacroRoutine();
    std::cout << name << " created a macro routine." << std::endl;
}

void Person::executeMacroRoutine()
{
    if (macroRoutine)
    {
        std::cout << name << " is executing the macro routine." << std::endl;
        macroRoutine->execute();
    }
    else
    {
        std::cout << name << " has no macro routine to execute." << std::endl;
    }
}

void Person::showRooms()
{
    std::cout << name << "'s Rooms:" << std::endl;
    for (Room *room : rooms)
    {
        std::cout << "- " << room->getName() << std::endl;
    }
}
