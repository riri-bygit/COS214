/**
 * @file Sensor.h
 * @author Paballo Diyase u23528142
 * @brief Abstract base class for all sensor types.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */



#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>

/**
 * @class Sensor
 * @brief Abstract base class for all sensor types.
 * 
 * Defines an interface for sensors that can be updated and provide status.
 */
class Sensor {
public:
    /**
     * @brief Virtual method to update the sensor's state.
     * 
     * Pure virtual function to be implemented by derived classes.
     */
    virtual void update() = 0;

    /**
     * @brief Method to get the status of the sensor.
     * @return A string representing the sensor's status.
     */
    virtual std::string getStatus() = 0;

    /**
     * @brief Virtual destructor for the Sensor class.
     */
    virtual ~Sensor() {}
};

#endif // SENSOR_H
