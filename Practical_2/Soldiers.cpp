#include "Soldiers.h"

Soldiers::~Soldiers() {
    delete weapon;
}

void Soldiers::engage() {
    std::cout << "Engaging unit: " << getUnitName() << endl;
    prepare();
    execute();
}

void Soldiers::disengage() {
    std:: cout << "Disengaging unit: " << getUnitName() << endl;
    retreat();
    rest();
}


Memento* Soldiers::militusMemento() {
    // return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName, weapon);
    return new Memento(getHealthPerSoldier(), getDamagePerSoldier(), getDefencePerSoldier(), getAmountOfSoldiersPerUnit(), getUnitName());
}

void Soldiers::vivificaMemento(Memento* memento) {
    healthPerSoldier = memento->healthPerSoldier;
    damagePerSoldier = memento->damagePerSoldier;
    defencePerSoldier = memento->defencePerSoldier;
    amountOfSoldiersPerUnit = memento->amountOfSoldiersPerUnit;
    unitName = memento->unitName;
    delete weapon;
    weapon = memento->weapon;
}

void Soldiers::takeDamage(int damage) {
    healthPerSoldier -= (damage - defencePerSoldier);
    if (healthPerSoldier < 0) healthPerSoldier = 0;
    cout << unitName << " took " << damage << " damage, health now " << healthPerSoldier << endl;
}

bool Soldiers::isAlive() {
    return healthPerSoldier > 0;
}

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

std::string Soldiers:: getUnitName() const
    {
        return unitName;
    }

void Soldiers:: setHealthPerSoldier(int health) {
        healthPerSoldier = health;
    }

void Soldiers::setDamagePerSoldier(int damage) {
        damagePerSoldier = damage;
    }

void Soldiers::setDefencePerSoldier(int defence) {
        defencePerSoldier = defence;
    }

void Soldiers::setAmountOfSoldiersPerUnit(int amount) {
        amountOfSoldiersPerUnit = amount;
    }

void Soldiers::setUnitName(const std::string &name) {
        unitName = name;
    }

void Soldiers::prepare() {
    // cout << "Preparing unit: " << getUnitName() << endl;
    cout << unitName << " is preparing for battle with weapon: " << weapon->getWeaponName() << endl;
}

void Soldiers::execute() {
    // cout << "Executing unit: " << getUnitName() << endl;
    cout << getUnitName()  << " is executing attack with weapon: " << weapon->getWeaponName() << endl;
    weapon->useWeapon();
}

void Soldiers::retreat() {
    cout << "Retreating unit: " << getUnitName() << endl;
}

void Soldiers::rest() {
    cout << "Resting unit: " << getUnitName() << endl;
}

