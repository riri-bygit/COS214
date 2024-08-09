#include "Soldiers.h"

Soldiers::~Soldiers()
{
    delete weapon;
}

void Soldiers::setWeapon(Weapon* newWeapon) {
    if (weapon != nullptr) {
        delete weapon;
    }
    weapon = newWeapon;
}

Soldiers *Soldiers::clonis()
{
    return new Soldiers(*this); // Or nullptr if cloning is not implemented
    // cout << "hello";
}

void Soldiers::engage()
{
    std::cout << "Engaging unit: " << getUnitName() << endl;
    prepare();
    execute();
}

void Soldiers::disengage()
{
    std::cout << "Disengaging unit: " << getUnitName() << endl;
    retreat();
    rest();
}

Memento *Soldiers::militusMemento() // sets the memento
{
    // return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName, weapon);
    return new Memento(getHealthPerSoldier(), getDamagePerSoldier(), getDefencePerSoldier(), getAmountOfSoldiersPerUnit(), getUnitName());
}

void Soldiers::vivificaMemento(Memento *memento) //restores the  memento
{
    // if (memento) {
    //     // Safeguard: Check if the memento has a valid weapon
    //     if (memento->getWeapon()) {
    //         if (weapon) {
    //             delete weapon; // Free existing weapon to prevent a memory leak
    //         }
    //         weapon = new Weapon(*(memento->getWeapon())); // Deep copy of Weapon
    //     }

    // }
////////////////////////
    //  if (memento->weapon) {
    //     // Perform a deep copy of the weapon
    //     this->weapon = new Weapon(*memento->weapon);
    // }

    if (memento->weapon) {
        if (this->weapon) {
            delete this->weapon; // Clean up the old weapon
            this->weapon = nullptr;
        }
        this->weapon = new Weapon(*memento->weapon); // Deep copy of the Weapon
    } else {
        // If memento's weapon is null, make sure to clear the current weapon
        delete this->weapon;
        this->weapon = nullptr;
    }

    healthPerSoldier = memento->healthPerSoldier;
    damagePerSoldier = memento->damagePerSoldier;
    defencePerSoldier = memento->defencePerSoldier;
    amountOfSoldiersPerUnit = memento->amountOfSoldiersPerUnit;
    unitName = memento->unitName;
    // delete weapon;
    // weapon = memento->weapon;
    setWeapon(new Weapon(*memento->weapon)); // Deep copy of the weapon
}

void Soldiers::takeDamage(int damage)
{
    healthPerSoldier -= (damage - defencePerSoldier);
    if (healthPerSoldier < 0)
        healthPerSoldier = 0;
    cout << unitName << " took " << damage << " damage, health now " << healthPerSoldier << endl;
}

bool Soldiers::isAlive()
{
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

std::string Soldiers::getUnitName() const
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

void Soldiers::prepare()
{
    // cout << "Preparing unit: " << getUnitName() << endl;
    // /////
    // cout << unitName << " is preparing for battle with weapon: " << weapon->getWeaponName() << endl;
    ///
    if (weapon) {
        std::cout << unitName << " is preparing for battle with weapon: " << weapon->getWeaponName() << endl;
    } else {
        std::cout << unitName << " is preparing for battle without a weapon." << endl;
    }
}

void Soldiers::execute()
{
    // cout << "Executing unit: " << getUnitName() << endl;
    //////////////
    // cout << getUnitName() << " is executing attack with weapon: " << weapon->getWeaponName() << endl;
    // weapon->useWeapon();

     if (weapon) {
        std::cout << getUnitName() << " is executing attack with weapon: " << weapon->getWeaponName() << endl;
        weapon->useWeapon();
    } else {
        std::cout << getUnitName() << " is executing attack without a weapon." << endl;
    }
}

void Soldiers::retreat()
{
    cout << "Retreating unit: " << getUnitName() << endl;
}

void Soldiers::rest()
{
    cout << "Resting unit: " << getUnitName() << endl;
}
