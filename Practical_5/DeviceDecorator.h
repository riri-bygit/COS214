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

// Decorator: DeviceDecorator
class DeviceDecorator : public Device {
protected:
    Device* device;

public:
    DeviceDecorator(Device* dev);
    void performAction() override;
    std::string getStatus() override;
};

// ConcreteDecoratorA: SmartThermostatIntegrator (adds temperature control)
class SmartThermostatIntegrator : public DeviceDecorator {
private:
    LegacyThermostat* legacyThermostat;
    int addState;  // State for storing temperature

public:
    SmartThermostatIntegrator(LegacyThermostat* legacyTherm);
    void setTemperature(int temp);
    int getTemperature();
    void performAction() override;
    std::string getStatus() override;
};

// ConcreteDecoratorA: EnergySavingDecorator (adds energy-saving mode)
class EnergySavingDecorator : public DeviceDecorator {
private:
    bool addState;  // State for energy-saving mode

public:
    EnergySavingDecorator(Device* dev);
    void activateEnergySavingMode();
    void performAction() override;
    std::string getStatus() override;
};

#endif // DEVICE_DECORATOR_H
