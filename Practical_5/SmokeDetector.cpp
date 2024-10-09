/**
 * @file SmokeDetector.cpp
 * @author Paballo Diyase u23528142
 * @brief Smoke detector for room
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include "SmokeDetector.h"

/**
 * @brief Constructs the SmokeDetector with the specified room and command.
 * @param r Pointer to the Room object.
 * @param command Pointer to the Command to lock all doors.
 */
SmokeDetector::SmokeDetector(Room *r, Command *command)
    : smokeDetected(false), room(r), lockAllDoorsCommand(command) {}

/**
 * @brief Updates the sensor's state when smoke is detected and executes the lock doors command.
 */
void SmokeDetector::update()
{
    smokeDetected = true;
    std::cout << "Smoke detected! Executing lock all doors command." << std::endl;

    if (lockAllDoorsCommand)
    {
        lockAllDoorsCommand->execute(); // Execute the command to lock all doors
    }
    room->getStatus();
}

/**
 * @brief Retrieves the current status of the smoke detector.
 * @return A string indicating whether smoke was detected.
 */
std::string SmokeDetector::getStatus()
{
    return smokeDetected ? "Smoke Detected" : "No Smoke Detected";
}

/**
 * @brief Destructor for SmokeDetector.
 */
SmokeDetector::~SmokeDetector() {}
