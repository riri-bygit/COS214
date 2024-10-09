/**
 * @file MotionSensor.h
 * @author Paballo Diyase u23528142
 * @brief A motion sensor that detects movement in a room.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"
#include "Room.h"

/**
 * @class MotionSensor
 * @brief A motion sensor that detects movement in a room.
 */
class MotionSensor : public Sensor
{
private:
    bool motionDetected; ///< Flag to indicate if motion is detected.
    Room *room;          ///< Pointer to the Room object.

public:
    /**
     * @brief Constructor for MotionSensor.
     * @param r Pointer to the Room object.
     */
    MotionSensor(Room *r);

    /**
     * @brief Updates the sensor's state (e.g., detecting motion).
     */
    void update() override;

    /**
     * @brief Retrieves the current status of the sensor.
     * @return A string indicating whether motion was detected or not.
     */
    std::string getStatus() override;

    /**
     * @brief Destructor for MotionSensor.
     */
    ~MotionSensor();
};

#endif // MOTIONSENSOR_H
