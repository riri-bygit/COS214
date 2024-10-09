/**
 * @file Person.h
 * @author Paballo Diyase u23528142
 * @brief Client of the system
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "Person.h"

/**
 * @brief Constructor for the Person class.
 * @param name The name of the person.
 */
Person::Person(const std::string &name) : name(name) {}

/**
 * @brief Adds a sensor that the person can interact with.
 * @param sensor Pointer to the Sensor object.
 */
void Person::addSensor(Sensor *sensor)
{
    sensors.push_back(sensor);
}

/**
 * @brief Removes a sensor that the person was interacting with.
 * @param sensor Pointer to the Sensor object.
 */
void Person::removeSensor(Sensor *sensor)
{
    auto it = std::remove(sensors.begin(), sensors.end(), sensor);
    if (it != sensors.end())
    {
        sensors.erase(it);
    }
}

/**
 * @brief Moves the person to a different room and triggers updates on associated sensors.
 */
void Person::move()
{
    std::cout << name << " is moving to a new room!" << std::endl;
    for (Sensor *sensor : sensors)
    {
        sensor->update(); // Triggers sensor updates when the person moves
    }
}

/**
 * @brief Retrieves the name of the person.
 * @return A string representing the person's name.
 */
std::string Person::getName() const
{
    return name;
}

/**
 * @brief Destructor for the Person class.
 */
Person::~Person()
{
    // Clear sensors if necessary
    sensors.clear();
}
