#include "DeviceDecorator.h"

// Implementation of DeviceDecorator
DeviceDecorator::DeviceDecorator(Device* dev) : device(dev) {}

void DeviceDecorator::performAction() {
    device->performAction();
}

std::string DeviceDecorator::getStatus() {
    return device->getStatus();
}

// Implementation of SmartThermostatIntegrator
SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat* legacyTherm)
    : DeviceDecorator(nullptr), legacyThermostat(legacyTherm), addState(legacyTherm->getLegacyTemperature()) {}

void SmartThermostatIntegrator::setTemperature(int temp) {
    addState = temp;
    legacyThermostat->setLegacyTemperature(temp);
}

int SmartThermostatIntegrator::getTemperature() {
    return addState;
}

void SmartThermostatIntegrator::performAction() {
    setTemperature(22);
    std::cout << "Thermostat set to " << getTemperature() << " degrees." << std::endl;
}

std::string SmartThermostatIntegrator::getStatus() {
    return "Thermostat temperature: " + std::to_string(getTemperature());
}

// Implementation of EnergySavingDecorator
EnergySavingDecorator::EnergySavingDecorator(Device* dev) : DeviceDecorator(dev), addState(false) {}

void EnergySavingDecorator::activateEnergySavingMode() {
    addState = true;
    std::cout << "Energy-saving mode activated." << std::endl;
}

void EnergySavingDecorator::performAction() {
    if (addState) {
        std::cout << "Performing action in energy-saving mode." << std::endl;
    } else {
        device->performAction();
    }
}

std::string EnergySavingDecorator::getStatus() {
    return device->getStatus() + (addState ? " (energy-saving mode)" : "");
}
