#include "FarmFactory.h"
#include "TruckNotification.h"
#include "Truck.h"
#include "FertilizerTruck.h"
#include "DeliveryTruck.h"


#include <iostream>

int main() {
    ConcreteFarmFactory factory;
    FarmUnit* farm = factory.createFarm();

    FarmUnit* field = factory.createFarmUnit("CropField");
    FarmUnit* barn = factory.createFarmUnit("Barn");

    farm->addUnit(field);
    farm->addUnit(barn);

    farm->traverseFarms();

    TruckNotificationSystem notificationSystem;
    Truck* truck1 = new FertilizerTruck(1, 50);
    Truck* truck2 = new DeliveryTruck(2, 100);

    notificationSystem.attach(truck1);
    notificationSystem.attach(truck2);

    notificationSystem.notify("FertilizationNeeded");

    delete truck1;
    delete truck2;
    delete farm;

    return 0;
}
