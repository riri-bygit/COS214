#include "Seasons.h"
#include "CropField.h"
#include "Farm.h"
#include "SoilState.h"
#include "TruckFactory.h"
#include "TruckNotification.h"
#include "FertTruckFactory.h"
#include "DeliveryTruck.h"
#include "DelTruckFactory.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "FarmCollection.h"
#include "FarmFactory.h"
#include "ConcreteFarmFactory.h"
#include "Summer.h"
#include "Spring.h"
#include "Winter.h"
#include "Autumn.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>

void applySeasonEffect(CropField *field, Seasons *season);
Seasons *chooseSeason();
void gameLoop(Farm *farm, Seasons *initialSeason);
void displayFarmStatus(Farm *farm);

void gameLoop(Farm *farm, Seasons *initialSeason)
{
    // Truck Notification System
    TruckNotificationSystem truckSystem;
    TruckFactory *fertTruckFactory = new FertTruckFactory();
    TruckFactory *delTruckFactory = new DelTruckFactory();

    Truck *fertTruck = fertTruckFactory->buyTruck(1, 50);
    Truck *delTruck = delTruckFactory->buyTruck(2, 100);

    truckSystem.attach(fertTruck);
    truckSystem.attach(delTruck);

    bool gameOver = false;
    int turn = 1;

    // Apply the initial season's effect
    for (auto &field : farm->getUnits())
    {
        applySeasonEffect(dynamic_cast<CropField *>(field), initialSeason);
    }

    while (!gameOver)
    {
        std::cout << "\n--------------------------\n";
        std::cout << "Turn: " << turn << "\n";
        std::cout << "Current Farm Status:\n";
        displayFarmStatus(farm);

        // Display menu to the user
        std::cout << "\n1. Apply New Season Effect\n2. Dispatch Fertilizer Truck\n3. Dispatch Delivery Truck\n4. Quit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Seasons *newSeason = chooseSeason();
            for (auto &field : farm->getUnits())
            {
                applySeasonEffect(dynamic_cast<CropField *>(field), newSeason);
            }
            delete newSeason;
            break;
        }
        case 2:
            truckSystem.dispatchTruck(fertTruck);
            break;
        case 3:
            truckSystem.dispatchTruck(delTruck);
            break;
        case 4:
            gameOver = true;
            break;
        default:
            std::cout << "Invalid choice, please try again!\n";
        }

        turn++;
    }

    // Clean up trucks
    fertTruckFactory->sellTruck(fertTruck);
    delTruckFactory->sellTruck(delTruck);

    delete fertTruckFactory;
    delete delTruckFactory;
}

void applySeasonEffect(CropField *field, Seasons *season)
{
    if (field)
    {
        std::cout << "\nApplying " << season->getName() << " season effects...\n";
        season->affectSoilState(field);
        std::cout << "Moisture Level: " << field->getMoistureLevels() << "\n";
        std::cout << "Fertilization Level: " << field->getFertLevels() << "\n";
    }
}

Seasons *chooseSeason()
{
    std::cout << "\nChoose a season:\n1. Summer\n2. Autumn\n3. Winter\n4. Spring\n";
    std::cout << "Enter your choice: ";
    int seasonChoice;
    std::cin >> seasonChoice;

    switch (seasonChoice)
    {
    case 1:
        return new Summer();
    case 2:
        return new Autumn();
    case 3:
        return new Winter();
    case 4:
        return new Spring();
    default:
        std::cout << "Invalid choice, defaulting to Summer.\n";
        return new Summer();
    }
}

void displayFarmStatus(Farm *farm)
{
    // // Traversal strategy example
    // farm->initializeTraversalStrategy("BFT"); // or "DFT"
    // while (!farm->traversalStrategy->isDone())
    // {
    //     Farm *currentFarm = farm->traversalStrategy->currentFarm();
    //     std::cout << "Farm: " << currentFarm->getName() << "\n";
    //     farm->traversalStrategy->next();
    // }
}

int main()
{
    // Welcome message
    std::cout << "Welcome to the Farm Management Simulation!\n";
    FarmFactory *factory1 = new ConcreteFarmFactory(); // Create the farm and add CropFields
    factory1->createFarmUnit("Barn");
    FarmUnit *cropfield1 = factory1->createFarmUnit("Cropfield");

    Farm *farm = new Farm("Sunnydale Farm");

    farm->addUnit(cropfield1);

    // Initial state of the crop field
    cropfield1->setSoilState(new DrySoil());
    cropfield1->setMoistureLevels(50); // Initial moisture level
    cropfield1->setFertLevels(30);     // Initial fertilization level

    // Choose the initial season
    Seasons *season = chooseSeason();

    // Start the game loop
    gameLoop(farm, season);

    // Clean up
    delete season;
    delete farm;

    return 0;
}