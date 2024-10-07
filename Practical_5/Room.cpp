#include "Room.h"

void Room::addDevice(Device *device)
{
    devices.push_back(device);
}
void Room::removeDevice(Device *device)
{

    auto it = std::remove(devices.begin(), devices.end(), device);

    if (it != devices.end())
    {
        devices.erase(it, devices.end());
        std::cout << "Device removed from Room " << roomName << ".\n";
        delete device;
    }
    else
    {
        std::cout << "Device not found in Room " << roomName << ".\n";
    }
}
string Room::getStatus()
{
    std::string status = "Room status:\n";
    for (auto device : devices)
    {
        status += device->getDeviceType() + ": " + device->getStatus() + "\n";
    }
    return status;
}
void Room::performAction()
{
    for (auto device : devices)
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
    for (auto device : devices)
    {
        delete device;
    }
    devices.clear();
    std::cout << "Room " << roomName << " destroyed.\n";
}

void Room::TurnOffAllLights()
{
    for (Device *device : devices)
    {
        if (device->getDeviceType() == "Light")
        {
            Light *light = dynamic_cast<Light *>(device); // Type-cast to Light
            if (light)
            {
                light->turnOff(); // Call specific turnOff method
            }
        }
    }
}
void Room::LockAllDors()
{
    for (Device *device : devices)
    {
        if (device->getDeviceType() == "DoorLock")
        {
            DoorLock *doorLock = dynamic_cast<DoorLock *>(device); // Type-cast to DoorLock
            if (doorLock)
            {
                doorLock->lock(); // Call specific lock method
            }
        }
    }
}
void Room::SetTemperature(int temp)
{
    for (Device *device : devices)
    {
        if (device->getDeviceType() == "Thermostat")
        {
            Thermostat *thermostat = dynamic_cast<Thermostat *>(device); // Type-cast to Thermostat
            if (thermostat)
            {
                thermostat->setTemperature(temp); // Set specific temperature
            }
        }
    }
}

string Room::getName()
{
    return roomName;
}