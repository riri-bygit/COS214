#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Class representing a legacy thermostat with basic functionalities such as setting temperature, turning on/off, and unit switching.
 */
class LegacyThermostat {
private:
    double temperature; /**< Current temperature set on the thermostat. */
    bool isOn;          /**< Indicates whether the thermostat is on or off. */
    string unit;        /**< Unit of temperature (Celsius or Fahrenheit). */

public:
    /**
     * @brief Constructor for the LegacyThermostat class.
     * Initializes the thermostat to 22°C and sets it to off.
     */
    LegacyThermostat();

    /**
     * @brief Sets the temperature on the thermostat.
     * @param temp Temperature value to set.
     */
    void setTemp(double temp);

    /**
     * @brief Gets the current temperature set on the thermostat.
     * @return Current temperature.
     */
    double getTemp();

    /**
     * @brief Turns the thermostat on.
     */
    void turnOn();

    /**
     * @brief Turns the thermostat off.
     */
    void turnOff();

    /**
     * @brief Sets the unit of the thermostat to Celsius or Fahrenheit.
     * @param u Unit to set ("Celsius" or "Fahrenheit").
     */
    void setUnit(const string &u);

    /**
     * @brief Gets the current unit of the thermostat.
     * @return The current unit as a string.
     */
    string getUnit();
};

#endif // LEGACYTHERMOSTAT_H
