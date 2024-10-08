#include "main.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Create rooms using smart pointers
    auto livingRoom = make_unique<Room>("Living Room");
    auto kitchen = make_unique<Room>("Kitchen");

    // Create legacy devices using smart pointers
    auto legacyLivingRoomLight = make_unique<LegacyLight>();
    auto legacyFrontDoorLock = make_unique<LegacyDoorLock>();
    auto legacyBackDoorLock = make_unique<LegacyDoorLock>();
    auto legacyThermostat = make_unique<LegacyThermostat>();

    // Create devices that use the legacy devices
    auto livingRoomLight = make_unique<Light>(legacyLivingRoomLight.release());
    auto frontDoorLock = make_unique<DoorLock>(legacyFrontDoorLock.release());
    auto backDoorLock = make_unique<DoorLock>(legacyBackDoorLock.release());
    auto thermo = make_unique<Thermostat>(legacyThermostat.release());

    
    return 0;
}
