#include <iostream>
#include "Soldiers.h"
using namespace std;

int Soldiers::getHealthPerSoldier() const
{
    return healthPerSoldier;
}

int Soldiers::getDamagePerSoldier() const
{
    return damagePerSoldier;
}

int Soldiers::getDefencePerSoldier() const
{
    return defencePerSoldier;
}

int Soldiers::getAmountOfSoldiersPerUnit() const
{
    return amountOfSoldiersPerUnit;
}

string Soldiers::getUnitName() const
{
    return unitName;
}

void Soldiers::setHealthPerSoldier(int health)
{
    healthPerSoldier = health;
}

void Soldiers::setDamagePerSoldier(int damage)
{
    damagePerSoldier = damage;
}

void Soldiers::setDefencePerSoldier(int defence)
{
    defencePerSoldier = defence;
}

void Soldiers::setAmountOfSoldiersPerUnit(int amount)
{
    amountOfSoldiersPerUnit = amount;
}

void Soldiers::setUnitName(const std::string &name)
{
    unitName = name;
}
