#include "ShieldBearer.h"

Soldiers *ShieldBearer::clonis()
{
    return new ShieldBearer(*this);
}

void ShieldBearer::engage()
{
    prepare();
    execute();
}

void ShieldBearer::disengage()
{
    retreat();
    rest();
}

ShieldBearer::~ShieldBearer() {}

void ShieldBearer::prepare()
{
    cout << "ShieldBearer preparing" << endl;
    weapon->useWeapon();
}

void ShieldBearer::execute()
{
    cout << "ShieldBearer executing" << endl;
    weapon->useWeapon();
}

void ShieldBearer::retreat()
{
    cout << "ShieldBearer retreating" << endl;
}

void ShieldBearer::rest()
{
    cout << "ShieldBearer resting" << endl;
}

// void ShieldBearer::prepare() {
//     cout << "ShieldBearers (" << getUnitName() << "): Locking shields and forming a defensive wall. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void ShieldBearer::execute() {
//     cout << "ShieldBearers (" << getUnitName() << "): Advancing steadily with shields raised. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void ShieldBearer::retreat() {
//     cout << "ShieldBearers (" << getUnitName() << "): Slowly retreating while maintaining formation. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }

// void ShieldBearer::rest() {
//     cout << "ShieldBearers (" << getUnitName() << "): Resting and repairing their shields. "
//          << "Health: " << getHealthPerSoldier() << ", Damage: " << getDamagePerSoldier()
//          << ", Defence: " << getDefencePerSoldier() << ", Amount: " << getAmountOfSoldiersPerUnit() << endl;
// }
