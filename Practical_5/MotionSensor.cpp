/**
 * @file MotionSensor.cpp
 * @author Paballo Diyase u23528142
 * @brief Motion Sensor
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "MotionSensor.h"

/**
 * @brief Constructor for MotionSensor.
 * @param r Pointer to the Room object.
 */
MotionSensor::MotionSensor(Room *r) : motionDetected(false), room(r) {}

/**
 * @brief Updates the sensor's state (simulates motion detection logic).
 */
void MotionSensor::update() {
    motionDetected = true; // Simulate motion detection
    std::cout << "Motion detected in the room!" << std::endl;
}

/**
 * @brief Retrieves the current status of the sensor.
 * @return A string indicating whether motion was detected or not.
 */
std::string MotionSensor::getStatus() {
    return motionDetected ? "Motion Detected" : "No Motion Detected";
}

/**
 * @brief Destructor for MotionSensor.
 */
MotionSensor::~MotionSensor() {}
