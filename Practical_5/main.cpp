/**
 * @file main.cpp
 * @author Paballo Diyase u23528142
 * @brief System main
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @file main.cpp
 * @brief Main entry point for the smart home system simulation.
 * 
 * This demo simulates a person interacting with smart devices, triggering sensors,
 * and executing commands in a smart home environment.
 */

#include "main.h"
#include <iostream>
#include <memory>
using namespace std;

/**
 * @brief Main function to run the smart home system simulation.
 * 
 * This simulation demonstrates device interactions, sensor triggers, 
 * command executions, and a person moving between rooms.
 * 
 * @return int Return 0 on successful execution.
 */
int main()
{
    // Create rooms using smart pointers
    auto livingRoom = make_unique<Room>("Living Room");
    auto kitchen = make_unique<Room>("Kitchen");
    auto bedroom = make_unique<Room>("Bedroom");

    // Create legacy devices using smart pointers
    auto legacyLivingRoomLight = make_unique<LegacyLight>();
    auto legacyKitchenLight = make_unique<LegacyLight>();
    auto legacyFrontDoorLock = make_unique<LegacyDoorLock>();
    auto legacyBackDoorLock = make_unique<LegacyDoorLock>();
    auto legacyThermostat = make_unique<LegacyThermostat>();

    // Create devices that use the legacy devices
    auto livingRoomLight = make_unique<Light>(legacyLivingRoomLight.release());
    auto kitchenLight = make_unique<Light>(legacyKitchenLight.release());
    auto frontDoorLock = make_unique<DoorLock>(legacyFrontDoorLock.release());
    auto backDoorLock = make_unique<DoorLock>(legacyBackDoorLock.release());
    auto thermostat = make_unique<Thermostat>(legacyThermostat.release());

    // Add devices to the rooms
    livingRoom->addDevice(move(livingRoomLight));
    kitchen->addDevice(move(kitchenLight));
    livingRoom->addDevice(move(frontDoorLock));
    livingRoom->addDevice(move(backDoorLock));
    bedroom->addDevice(move(thermostat));

    // Initial Room Statuses
    cout << "Initial Room Statuses:" << endl;
    cout << livingRoom->getStatus() << endl;
    cout << kitchen->getStatus() << endl;
    cout << bedroom->getStatus() << endl;
    cout << "------------------------------------" << endl;

    // Pause for user input
    cout << "Press Enter to continue..." << endl;
    cin.get(); // Wait for the user to press Enter

    // Create commands
    auto lockAllDoorsCommand = make_unique<LockAllDoors>(livingRoom.get());

    // Create sensors and associate them with rooms and commands
    auto smokeDetector = make_unique<SmokeDetector>(livingRoom.get(), lockAllDoorsCommand.get());
    auto motionSensor = make_unique<MotionSensor>(livingRoom.get());

    // Add sensors to the rooms
    livingRoom->addSensor(move(smokeDetector));
    livingRoom->addSensor(move(motionSensor));

    // Create a person
    auto person = make_unique<Person>("John");
    person->addRoom(livingRoom.get());
    person->addRoom(kitchen.get());
    person->addRoom(bedroom.get());

    // Simulate interactions with devices in the living room
    cout << "Simulating John's activities in the living room:" << endl;
    person->moveToRoom(livingRoom.get());
    cout << "Person is now in the " << livingRoom->getName() << "." << endl;

    // Pause
    cout << "Press Enter to turn on the living room light and lock the front door..." << endl;
    cin.get(); 

    // John turns on the living room light and locks the front door
    livingRoom->findDevice("Light")->turnOn();
    livingRoom->findDevice("DoorLock")->lock();

    // John checks the thermostat in the bedroom and adjusts the temperature
    cout << "Simulating John's actions in the bedroom:" << endl;
    person->moveToRoom(bedroom.get());
    cout << "Person is now in the " << bedroom->getName() << "." << endl;

    // Pause
    cout << "Press Enter to set the bedroom temperature..." << endl;
    cin.get();

    

    // John moves to the kitchen and turns off the kitchen light
    cout << "Simulating John's activities in the kitchen:" << endl;
    person->moveToRoom(kitchen.get());
    cout << "Person is now in the " << kitchen->getName() << "." << endl;

    // Pause
    cout << "Press Enter to turn off the kitchen light..." << endl;
    cin.get();

    kitchen->findDevice("Light")->turnOff();

    // Trigger sensors in the living room
    cout << "Simulating sensor activity in the living room:" << endl;
    
    // Pause before triggering sensors
    cout << "Press Enter to trigger sensors in the living room..." << endl;
    cin.get();
    
    livingRoom->triggerSensors();

    // Print the updated status of each room
    cout << "Updated Room Statuses:" << endl;
    cout << livingRoom->getStatus() << endl;
    cout << kitchen->getStatus() << endl;
    cout << bedroom->getStatus() << endl;

    // Smoke is detected in the living room, triggering the LockAllDoors command
    cout << "Simulating smoke detection in the living room:" << endl;

    // Pause
    cout << "Press Enter to simulate smoke detection..." << endl;
    cin.get();
    
      // Simulate smoke detected

    // After smoke detection
    cout << "After smoke detection:" << endl;
    cout << livingRoom->getStatus() << endl;

    // John tries to move back to the living room
    cout << "John attempts to move back to the living room:" << endl;

    // Pause
    cout << "Press Enter to allow John to move back to the living room..." << endl;
    cin.get();
    
    person->moveToRoom(livingRoom.get());
    cout << "Person is now in the " << livingRoom->getName() << "." << endl;

    // Final Room Statuses
    cout << "Final Room Statuses:" << endl;
    cout << livingRoom->getStatus() << endl;
    cout << kitchen->getStatus() << endl;
    cout << bedroom->getStatus() << endl;

    return 0;  // Cleanup handled automatically by smart pointers
}