#include "SoldierFactory.h"
#include <iostream>
using namespace std;
Soldiers *SoldierFactory::createUnit() {}

int SoldierFactory::calculateTotalHealthPerUnit()
{
    Soldiers *unit = createUnit();
    int totalHealth = unit->getHealthPerSoldier() * unit->getAmountOfSoldiersPerUnit();
    delete unit; 
    return totalHealth;
}

int SoldierFactory::calculateTotalDamagePerUnit()
{
    Soldiers *unit = createUnit();
    int totalDamage = unit->getDamagePerSoldier() * unit->getAmountOfSoldiersPerUnit();
    delete unit; 
    return totalDamage;
}

int SoldierFactory::calculateTotalDefencePerUnit()
{
    Soldiers *unit = createUnit();
    int totalDefence = unit->getDefencePerSoldier() * unit->getAmountOfSoldiersPerUnit();
    delete unit; 
    return totalDefence;
}
