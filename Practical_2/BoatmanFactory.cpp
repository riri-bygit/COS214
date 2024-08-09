#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit()
{
    Soldiers *unit = new Boatman();
    unit->setHealthPerSoldier(110);
    unit->setDamagePerSoldier(40);
    unit->setDefencePerSoldier(60);
    unit->setAmountOfSoldiersPerUnit(12);
    unit->setUnitName("Boatman");
    // unit->weapon = new Weapon("Spear", 30);
    unit->setWeapon(new Weapon("Spear", 30));
    return unit;
}

int BoatmanFactory::calculateTotalHealthPerUnit()
{
    return SoldierFactory::calculateTotalHealthPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit()
{
    return SoldierFactory::calculateTotalDamagePerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit()
{
    return SoldierFactory::calculateTotalDefencePerUnit();
}

BoatmanFactory::~BoatmanFactory() {}
