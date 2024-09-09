#ifndef TRUCKNOTIFICATIONSYSTEM_H
#define TRUCKNOTIFICATIONSYSTEM_H

#include "Truck.h"
#include <vector>
#include <string>

class TruckNotificationSystem {
private:
    std::vector<Truck*> trucks;

public:
    void attach(Truck* truck);
    void detach(Truck* truck);
    void notify(std::string event);
    void dispatchTruck(Truck* truck);
};

#endif
