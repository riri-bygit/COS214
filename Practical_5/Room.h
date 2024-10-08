#ifndef Room_H
#define Room_H
#include "Device.h"
#include "Sensor.h"
#include "Light.h"
#include "DoorLock.h"
#include "Thermostat.h"
#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <algorithm>
#include <memory>

class Room : public Device
{
    std::vector<std::unique_ptr<Device>> devices; // Use unique_ptr for devices
    std::vector<std::unique_ptr<Sensor>> sensors; // Use unique_ptr for sensors

    string roomName;

public:
    Room(const string &name);
    void addDevice(std::unique_ptr<Device> device);
    void removeDevice(Device *device);
    void addSensor(std::unique_ptr<Sensor> sensor);
    void removeSensor(Sensor *sensor);
    string getStatus();
    void performAction();
    void TurnOffAllLights();
    void LockAllDors();
    void SetTemperature(int temp);
    std::string getDeviceType();
    std::string getName();
    ~Room();
};

#endif