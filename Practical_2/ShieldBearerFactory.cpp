#include "ShieldBearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit() {
    ShieldBearer* unit = new ShieldBearer();
    unit->setHealthPerSoldier(100);
    unit->setDamagePerSoldier(0);
    unit->setDefencePerSoldier(75);
    unit->setAmountOfSoldiersPerUnit(10);
    unit->setUnitName("ShieldBearer");
    // unit->weapon = new Weapon("Shield", 25);
    unit->setWeapon(new Weapon("Shield", 35));
    return unit;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit() {
    return SoldierFactory::calculateTotalHealthPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit() {
    return SoldierFactory::calculateTotalDamagePerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() {
    return SoldierFactory::calculateTotalDefencePerUnit();
}

ShieldBearerFactory::~ShieldBearerFactory() {}
