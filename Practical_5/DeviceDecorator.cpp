/**
 * @file DeviceDecorator.cpp
 * @author Paballo Diyase u23528142
 * @brief Decorates devices adding attional functionality
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "DeviceDecorator.h"

/**
 * @brief Base class for decorating devices with additional functionality.
 */
DeviceDecorator::DeviceDecorator(Device* dev) : device(dev) {}

/**
 * @brief Calls the performAction method of the wrapped device.
 */
void DeviceDecorator::performAction() {
    device->performAction();
}

/**
 * @brief Returns the status of the wrapped device.
 * @return Status of the device as a string.
 */
std::string DeviceDecorator::getStatus() {
    return device->getStatus();
}

/**
 * @brief Integrates legacy thermostats into the smart system.
 * Adds functionality for controlling and retrieving temperature.
 */
SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat* legacyTherm)
    : DeviceDecorator(nullptr), legacyThermostat(legacyTherm), addState(legacyTherm->getLegacyTemperature()) {}

/**
 * @brief Sets the temperature of the thermostat.
 * @param temp New temperature to set.
 */
void SmartThermostatIntegrator::setTemperature(int temp) {
    addState = temp;
    legacyThermostat->setLegacyTemperature(temp);
}

/**
 * @brief Retrieves the current temperature of the thermostat.
 * @return The current temperature.
 */
int SmartThermostatIntegrator::getTemperature() {
    return addState;
}

/**
 * @brief Performs the action of setting the thermostat to a specific temperature.
 */
void SmartThermostatIntegrator::performAction() {
    setTemperature(22);
    std::cout << "Thermostat set to " << getTemperature() << " degrees." << std::endl;
}

/**
 * @brief Retrieves the status of the thermostat, including the temperature.
 * @return Status of the thermostat as a string.
 */
std::string SmartThermostatIntegrator::getStatus() {
    return "Thermostat temperature: " + std::to_string(getTemperature());
}

/**
 * @brief Decorator class for adding energy-saving functionality to a device.
 */
EnergySavingDecorator::EnergySavingDecorator(Device* dev) : DeviceDecorator(dev), addState(false) {}

/**
 * @brief Activates the energy-saving mode for the device.
 */
void EnergySavingDecorator::activateEnergySavingMode() {
    addState = true;
    std::cout << "Energy-saving mode activated." << std::endl;
}

/**
 * @brief Performs the action of the device, considering energy-saving mode.
 */
void EnergySavingDecorator::performAction() {
    if (addState) {
        std::cout << "Performing action in energy-saving mode." << std::endl;
    } else {
        device->performAction();
    }
}

/**
 * @brief Returns the status of the device, with additional information about energy-saving mode.
 * @return Status of the device as a string.
 */
std::string EnergySavingDecorator::getStatus() {
    return device->getStatus() + (addState ? " (energy-saving mode)" : "");
}
