#ifndef MEMENTO_H
#define MEMENTO_H

#include "Weapon.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

class Memento {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    // Weapon* weapon;
    Memento(int value1, int value2, int value3, int value4, std::string value5);

public:
    ~Memento();
    Weapon* weapon;
    friend class Soldiers;

};

#endif
