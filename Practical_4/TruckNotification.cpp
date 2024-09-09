#include "TruckNotification.h"
#include <algorithm>

void TruckNotificationSystem::attach(Truck* truck) {
    trucks.push_back(truck);
}

void TruckNotificationSystem::detach(Truck* truck) {
    trucks.erase(std::remove(trucks.begin(), trucks.end(), truck), trucks.end());
}

void TruckNotificationSystem::notify(std::string event) {
    for (Truck* truck : trucks) {
        truck->startEngine();
    }
}

void TruckNotificationSystem::dispatchTruck(Truck* truck) {
    truck->startEngine();
}
