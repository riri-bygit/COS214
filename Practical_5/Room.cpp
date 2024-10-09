#include "Room.h"

/**
 * @brief Constructor for the Room class.
 * @param name The name of the room.
 */
Room::Room(const std::string &name) : name(name) {}

/**
 * @brief Adds a door to the room.
 * @param door Pointer to the Door object.
 */
void Room::addDoor(Door *door)
{
    doors.push_back(door);
}

/**
 * @brief Adds a person to the room.
 * @param person Pointer to the Person object.
 */
void Room::addPerson(Person *person)
{
    people.push_back(person);
    std::cout << person->getName() << " has entered the room: " << name << std::endl;
}

/**
 * @brief Removes a person from the room.
 * @param person Pointer to the Person object.
 */
void Room::removePerson(Person *person)
{
    auto it = std::remove(people.begin(), people.end(), person);
    if (it != people.end())
    {
        people.erase(it);
        std::cout << person->getName() << " has left the room: " << name << std::endl;
    }
}

/**
 * @brief Locks all the doors in the room.
 */
void Room::LockAllDors()
{
    for (Door *door : doors)
    {
        door->lock();
    }
    std::cout << "All doors in room " << name << " have been locked." << std::endl;
}

/**
 * @brief Unlocks all the doors in the room.
 */
void Room::UnlockAllDors()
{
    for (Door *door : doors)
    {
        door->unlock();
    }
    std::cout << "All doors in room " << name << " have been unlocked." << std::endl;
}

/**
 * @brief Retrieves the name of the room.
 * @return A string representing the room's name.
 */
std::string Room::getName() const
{
    return name;
}

/**
 * @brief Destructor for the Room class.
 */
Room::~Room()
{
    doors.clear();
    people.clear();
}
