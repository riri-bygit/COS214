#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit() {
    Infantry* unit = new Infantry();
    unit->setHealthPerSoldier(120);
    unit->setDamagePerSoldier(60);
    unit->setDefencePerSoldier(50);
    unit->setAmountOfSoldiersPerUnit(15);
    unit->setUnitName("Infantry");
    unit->weapon = new Weapon("Rifle", 35);
    return unit;
}

int InfantryFactory::calculateTotalHealthPerUnit() {
    return SoldierFactory::calculateTotalHealthPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit() {
    return SoldierFactory::calculateTotalDamagePerUnit();
}

int InfantryFactory::calculateTotalDefencePerUnit() {
    return SoldierFactory::calculateTotalDefencePerUnit();
}

InfantryFactory::~InfantryFactory() {}