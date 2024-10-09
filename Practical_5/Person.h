#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>
#include "Sensor.h"

/**
 * @class Person
 * @brief Represents a person within the system, who can move between rooms and interact with sensors.
 */
class Person
{
private:
    std::string name;          ///< Name of the person.
    std::vector<Sensor *> sensors; ///< Sensors that the person interacts with.

public:
    /**
     * @brief Constructor for the Person class.
     * @param name The name of the person.
     */
    Person(const std::string &name);

    /**
     * @brief Adds a sensor that the person can interact with.
     * @param sensor Pointer to the Sensor object.
     */
    void addSensor(Sensor *sensor);

    /**
     * @brief Removes a sensor that the person was interacting with.
     * @param sensor Pointer to the Sensor object.
     */
    void removeSensor(Sensor *sensor);

    /**
     * @brief Moves the person to a different room and triggers updates on associated sensors.
     */
    void move();

    /**
     * @brief Retrieves the name of the person.
     * @return A string representing the person's name.
     */
    std::string getName() const;

    /**
     * @brief Destructor for the Person class.
     */
    ~Person();
};

#endif // PERSON_H
