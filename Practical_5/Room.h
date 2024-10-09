#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Door.h"

/**
 * @class Room
 * @brief Represents a room in the building, which can contain people and has doors that can be locked/unlocked.
 */
class Room
{
private:
    std::string name;            ///< The name of the room.
    std::vector<Door *> doors;   ///< List of doors in the room.
    std::vector<Person *> people; ///< List of people currently in the room.

public:
    /**
     * @brief Constructor for the Room class.
     * @param name The name of the room.
     */
    Room(const std::string &name);

    /**
     * @brief Adds a door to the room.
     * @param door Pointer to the Door object.
     */
    void addDoor(Door *door);

    /**
     * @brief Adds a person to the room.
     * @param person Pointer to the Person object.
     */
    void addPerson(Person *person);

    /**
     * @brief Removes a person from the room.
     * @param person Pointer to the Person object.
     */
    void removePerson(Person *person);

    /**
     * @brief Locks all the doors in the room.
     */
    void LockAllDors();

    /**
     * @brief Unlocks all the doors in the room.
     */
    void UnlockAllDors();

    /**
     * @brief Retrieves the name of the room.
     * @return A string representing the room's name.
     */
    std::string getName() const;

    /**
     * @brief Destructor for the Room class.
     */
    ~Room();
};

#endif // ROOM_H
