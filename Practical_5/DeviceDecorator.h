/**
 * @file DeviceDecorator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef DEVICE_DECORATOR_H
#define DEVICE_DECORATOR_H

#include "Device.h"

/**
 * @brief Base decorator class for devices.
 * Used to add functionality to devices dynamically.
 */
class DeviceDecorator : public Device {
protected:
    Device* device; ///< Pointer to the wrapped device.

public:
    DeviceDecorator(Device* dev);
    void performAction() override;
    std::string getStatus() override;
};

/**
 * @brief Concrete decorator that adds temperature control functionality to a legacy thermostat.
 */
class SmartThermostatIntegrator : public DeviceDecorator {
private:
    LegacyThermostat* legacyThermostat; ///< Pointer to the legacy thermostat.
    int addState; ///< Current temperature state.

public:
    SmartThermostatIntegrator(LegacyThermostat* legacyTherm);
    void setTemperature(int temp);
    int getTemperature();
    void performAction() override;
    std::string getStatus() override;
};

/**
 * @brief Concrete decorator that adds energy-saving mode functionality to a device.
 */
class EnergySavingDecorator : public DeviceDecorator {
private:
    bool addState; ///< Boolean flag for energy-saving mode.

public:
    EnergySavingDecorator(Device* dev);
    void activateEnergySavingMode();
    void performAction() override;
    std::string getStatus() override;
};

#endif // DEVICE_DECORATOR_H

