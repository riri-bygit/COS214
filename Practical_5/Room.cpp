#include "Room.h"
#include <iostream>
#include <algorithm>

void Room::addDevice(std::unique_ptr<Device> device)
{
    devices.push_back(std::move(device));
}

void Room::removeDevice(Device *device)
{
    auto it = std::remove_if(devices.begin(), devices.end(),
                             [&](const std::unique_ptr<Device> &d)
                             { return d.get() == device; });

    if (it != devices.end())
    {
        std::cout << "Device removed from Room " << roomName << ".\n";
        devices.erase(it, devices.end());
        // No need to explicitly delete the device; smart pointer handles it
    }
    else
    {
        std::cout << "Device not found in Room " << roomName << ".\n";
    }
}

void Room::addSensor(std::unique_ptr<Sensor> sensor)
{
    sensors.push_back(std::move(sensor));
}

void Room::removeSensor(Sensor *sensor)
{
    auto it = std::remove_if(sensors.begin(), sensors.end(),
                             [&](const std::unique_ptr<Sensor> &s)
                             { return s.get() == sensor; });

    if (it != sensors.end())
    {
        std::cout << "Sensor removed from Room " << roomName << ".\n";
        sensors.erase(it, sensors.end());
        // Smart pointer handles sensor deletion
    }
    else
    {
        std::cout << "Sensor not found in Room " << roomName << ".\n";
    }
}

std::string Room::getStatus()
{
    std::string status = getName() + "status \n";
    for (const auto &device : devices)
    {
        status += device->getDeviceType() + ": " + device->getStatus() + "\n";
    }
    return status;
}

void Room::performAction()
{
    for (const auto &device : devices)
    {
        device->performAction();
    }
}

std::string Room::getDeviceType()
{
    return "Room\n";
}

Room::Room(const std::string &name) : roomName(name)
{
    std::cout << "Room " << name << " created.\n";
}

Room::~Room()
{
    // No need for explicit deletion; unique_ptr automatically cleans up
    std::cout << "Room " << roomName << " destroyed.\n";
}

void Room::TurnOffAllLights()
{
    for (const auto &device : devices)
    {
        if (device->getDeviceType() == "Light")
        {
            Light *light = dynamic_cast<Light *>(device.get()); // Type-cast to Light
            if (light)
            {
                light->turnOff(); // Call specific turnOff method
            }
        }
    }
}

void Room::TurnOnAllLights()
{
    for (const auto &device : devices)
    {
        if (device->getDeviceType() == "Light")
        {
            Light *light = dynamic_cast<Light *>(device.get()); // Type-cast to Light
            if (light)
            {
                light->turnOn(); // Call specific turnOff method
            }
        }
    }
}

void Room::LockAllDoors()
{
    for (const auto &device : devices)
    {
        if (device->getDeviceType() == "DoorLock")
        {
            DoorLock *doorLock = dynamic_cast<DoorLock *>(device.get()); // Type-cast to DoorLock
            if (doorLock)
            {
                doorLock->lock(); // Call specific lock method
            }
        }
    }
}

void Room::UnlockAllDoors()
{
    for (const auto &device : devices)
    {
        if (device->getDeviceType() == "DoorLock")
        {
            DoorLock *doorLock = dynamic_cast<DoorLock *>(device.get()); // Type-cast to DoorLock
            if (doorLock)
            {
                doorLock->unlock(); // Call specific lock method
            }
        }
    }
}

void Room::SetTemperature(int temp)
{
    for (const auto &device : devices)
    {
        if (device->getDeviceType() == "Thermostat")
        {
            Thermostat *thermostat = dynamic_cast<Thermostat *>(device.get()); // Type-cast to Thermostat
            if (thermostat)
            {
                thermostat->setTemperature(temp); // Set specific temperature
            }
        }
    }
}

std::string Room::getName()
{
    return roomName;
}

void Room::triggerSensors()
{
    std::string status = "Room sensors triggered!!";
    for (const auto &sense : sensors)
    {
        sense->update();
    }
}