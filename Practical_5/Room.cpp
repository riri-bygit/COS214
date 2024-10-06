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