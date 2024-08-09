#include "Boatman.h"

Soldiers* Boatman::clonis() {
    return new Boatman(*this);
}

void Boatman::engage() {
    prepare();
    execute();
}

void Boatman::disengage() {
    retreat();
    rest();
}

Boatman::~Boatman() {}

void Boatman::prepare() {
    cout << "Boatman preparing" << endl;
    weapon->useWeapon();
}

void Boatman::execute() {
    cout << "Boatman executing" << endl;
    weapon->useWeapon();
}

void Boatman::retreat() {
    cout << "Boatman retreating" << endl;
}

void Boatman::rest() {
    cout << "Boatman resting" << endl;
}


// void Boatman::prepare() {
//     cout << "Boatmen (" << getUnitName() << "): Maneuvering boats into strategic positions. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Boatman::execute() {
//     cout << "Boatmen (" << getUnitName() << "): Launching a swift attack from the water. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Boatman::retreat() {
//     cout << "Boatmen (" << getUnitName() << "): Retreating back to the safety of the water. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Boatman::rest() {
//     cout << "Boatmen (" << getUnitName() << "): Resting and preparing their boats for the next engagement. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }