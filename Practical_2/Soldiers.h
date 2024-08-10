#ifndef Soldiers_h
#define Soldiers_h

#include "Memento.h"
#include "Weapon.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class Soldiers
{

public:
    void takeDamage(int damage);
    bool isAlive();
    virtual ~Soldiers();
    virtual Soldiers *clonis();
    virtual void engage();
    virtual void disengage();
    Memento *militusMemento(); //gets memento
    void vivificaMemento(Memento *memento); //sets memento

    int getHealthPerSoldier() const;
    int getDamagePerSoldier() const;
    int getDefencePerSoldier() const;
    int getAmountOfSoldiersPerUnit() const;
    std::string getUnitName() const;
    // Weapon *weapon;
    void setWeapon(Weapon* newWeapon);
    void setHealthPerSoldier(int health);
    void setDamagePerSoldier(int damage);
    void setDefencePerSoldier(int defence);
    void setAmountOfSoldiersPerUnit(int amount);
    void setUnitName(const std::string &name);
    Weapon * getWeapon();

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();

protected:
    Weapon* weapon;
    // void setWeapon(Weapon* newWeapon);
};
#endif