/**
 * @file Light.h
 * @author Paballo Diyase u23528142
 * @brief Smart light, intergrates legacy light as well
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"
#include "LegacyLight.h"
#include <iostream>
using namespace std;

/**
 * @brief Class representing a modern Light, which interfaces with a LegacyLight system.
 */
class Light : public Device {
private:
    bool isOn;             /**< Indicates if the light is on or off. */
    LegacyLight *light;    /**< Pointer to the legacy light being controlled. */

public:
    /**
     * @brief Gets the current status of the light.
     * @return "Light is on." or "Light is off." based on the state.
     */
    string getStatus();

    /**
     * @brief Toggles the state of the light (on/off).
     */
    void performAction();

    /**
     * @brief Turns the light on.
     */
    void turnOn();

    /**
     * @brief Turns the light off.
     */
    void turnOff();

    /**
     * @brief Gets the type of device.
     * @return String indicating the device type ("Light").
     */
    std::string getDeviceType();

    /**
     * @brief Constructor for the Light class.
     * @param light Pointer to a LegacyLight instance.
     */
    Light(LegacyLight *light);

    /**
     * @brief Destructor for the Light class.
     */
    ~Light();
};

#endif // LIGHT_H
