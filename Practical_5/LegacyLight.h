/**
 * @file LegacyLight.h
 * @author Paballo Diyase u23528142
 * @brief Legacy light with basic functionalities.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include <iostream>
using namespace std;

/**
 * @brief Class representing a legacy light with basic functionalities such as switching on, off, and dimming.
 */
class LegacyLight {
private:
    bool isOn;          /**< Indicates whether the light is on or off. */
    int brightness;     /**< Brightness level of the light (0-100). */
    bool bulbFailure;   /**< Indicates if the bulb has failed and needs replacement. */

public:
    /**
     * @brief Constructor for the LegacyLight class.
     * Initializes the light to off, brightness to 100, and no bulb failure.
     */
    LegacyLight();

    /**
     * @brief Turns the light on if there is no bulb failure.
     */
    void switchOn();

    /**
     * @brief Turns the light off.
     */
    void switchOff();

    /**
     * @brief Dims the light to a specified brightness level.
     * @param level Brightness level (0-100).
     */
    void dim(int level);

    /**
     * @brief Reports a bulb failure, preventing the light from being turned on or dimmed.
     */
    void reportBulbFailure();

    /**
     * @brief Replaces the bulb, allowing the light to function again.
     */
    void replaceBulb();

    /**
     * @brief Checks if the light is currently on.
     * @return true if the light is on, false otherwise.
     */
    bool isLightOn();
};

#endif // LEGACYLIGHT_H
