// #include <iostream>
// #include <vector>
// #include "Weapon.h"
// #include "Soldiers.h"
// #include "SoldierFactory.h"
// #include "ShieldBearerFactory.h"
// #include "InfantryFactory.h"
// #include "BoatmanFactory.h"
// #include "CareTaker.h"
// using namespace std;

// void battle(Soldiers *unit1, Soldiers *unit2) {
//     while (unit1->isAlive() && unit2->isAlive()) {
//         unit1->engage();
//         unit2->takeDamage(unit1->getDamagePerSoldier());

//         if (!unit2->isAlive()) {
//             cout << unit2->getUnitName() << " has died. " << unit1->getUnitName() << " wins!" << endl;
//             return;
//         }

//         unit2->engage();
//         unit1->takeDamage(unit2->getDamagePerSoldier());

//         if (!unit1->isAlive()) {
//             cout << unit1->getUnitName() << " has died. " << unit2->getUnitName() << " wins!" << endl;
//             return;
//         }
//     }
// }

// int main() {
//     vector<Soldiers *> army;
//     CareTaker caretaker;
//     ShieldBearerFactory sbFactory;
//     InfantryFactory infFactory;
//     BoatmanFactory boatFactory;

//     army.push_back(sbFactory.createUnit());
//     army.push_back(infFactory.createUnit());
//     army.push_back(boatFactory.createUnit());

//     int choice;
//     cout << "Choose your soldier type for battle:" << endl;
//     cout << "1. ShieldBearer" << endl;
//     cout << "2. Infantry" << endl;
//     cout << "3. Boatman" << endl;
//     cout << "Enter your choice: ";
//     cin >> choice;

//     Soldiers *userUnit = nullptr;
//     if (choice == 1) {
//         userUnit = sbFactory.createUnit();
//     } else if (choice == 2) {
//         userUnit = infFactory.createUnit();
//     } else if (choice == 3) {
//         userUnit = boatFactory.createUnit();
//     }

//     cout << "Choose opponent soldier type for battle:" << endl;
//     cout << "1. ShieldBearer" << endl;
//     cout << "2. Infantry" << endl;
//     cout << "3. Boatman" << endl;
//     cout << "Enter your choice: ";
//     cin >> choice;

//     Soldiers *opponentUnit = nullptr;
//     if (choice == 1) {
//         opponentUnit = sbFactory.createUnit();
//     } else if (choice == 2) {
//         opponentUnit = infFactory.createUnit();
//     } else if (choice == 3) {
//         opponentUnit = boatFactory.createUnit();
//     }

//     cout << "Battle begins!" << endl;
//     battle(userUnit, opponentUnit);

//     delete userUnit;
//     delete opponentUnit;

//     return 0;
// }
