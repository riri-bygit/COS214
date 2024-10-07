#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>

// Base Class: Device (Component)
class Device {
public:
    virtual void performAction() = 0;
    virtual std::string getStatus() = 0;
    virtual ~Device() = default;
};

// ConcreteComponent: LegacyThermostat (Legacy device)
class LegacyThermostat {
private:
    int legacyTemperature;  // Legacy state (temperature)

public:
    LegacyThermostat(int temp);
    int getLegacyTemperature();
    void setLegacyTemperature(int temp);
};

// ConcreteComponent: Light (Smart device)
class Light : public Device {
private:
    bool isOn;

public:
    Light();
    void toggle();
    void performAction() override;
    std::string getStatus() override;
};

#endif // DEVICE_H
