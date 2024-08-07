#include "Infantry.h"
#include "Weapon.h"

Soldiers* Infantry::clonis() {
    return new Infantry(*this);
}

void Infantry::engage() {
    prepare();
    execute();
}

void Infantry::disengage() {
    retreat();
    rest();
}

Infantry::~Infantry() {}

void Infantry::prepare() {
    cout << "Infantry preparing" << endl;
    weapon->useWeapon();
}

void Infantry::execute() {
    cout << "Infantry executing" << endl;
    weapon->useWeapon();
}

void Infantry::retreat() {
    cout << "Infantry retreating" << endl;
}

void Infantry::rest() {
    cout << "Infantry resting" << endl;
}

// void Infantry::prepare() {
//     cout << "Infantry (" << getUnitName() << "): Forming tight defensive formations. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Infantry::execute() {
//     cout << "Infantry (" << getUnitName() << "): Charging towards the enemy. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Infantry::retreat() {
//     cout << "Infantry (" << getUnitName() << "): Falling back to a safer position. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void Infantry::rest() {
//     cout << "Infantry (" << getUnitName() << "): Resting and resupplying. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }