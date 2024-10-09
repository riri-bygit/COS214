/**
 * @file SmokeDetector.h
 * @author Paballo Diyase u23528142
 * @brief Concrete sensor class that detects smoke in a room.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H

#include "Sensor.h"
#include "Room.h"
#include "Command.h"

/**
 * @class SmokeDetector
 * @brief Concrete sensor class that detects smoke in a room.
 * 
 * Triggers a command to lock all doors if smoke is detected.
 */
class SmokeDetector : public Sensor
{
private:
    bool smokeDetected; ///< Indicates if smoke has been detected.
    Room *room; ///< Pointer to the Room object.
    Command *lockAllDoorsCommand; ///< Command to lock all doors in the room.

public:
    /**
     * @brief Constructor for SmokeDetector.
     * @param r Pointer to the Room object.
     * @param command Pointer to the Command to lock all doors.
     */
    SmokeDetector(Room *r, Command *command);

    /**
     * @brief Updates the sensor's state when smoke is detected.
     */
    void update() override;

    /**
     * @brief Retrieves the current status of the smoke detector.
     * @return A string indicating the sensor's status.
     */
    std::string getStatus() override;

    /**
     * @brief Destructor for SmokeDetector.
     */
    ~SmokeDetector();
};

#endif // SMOKEDETECTOR_H
