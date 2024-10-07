#ifndef Room_H
#define Room_H
#include "Device.h"
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Room : public Device
{
    vector<Device *> devices;
    string roomName;

public:
    Room(const string &name);
    void addDevice(Device *dev);
    void removeDevice(Device *dev);
    string getStatus();
    void performAction();
    void TurnOffAllLights();
    void LockAllDors();
    void SetTemperature();
    std::string getDeviceType();
    ~Room();
};

#endif