#ifndef WEAPON_H
#define WEAPON_H

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class Weapon {
private:
    std::string weaponName;
    int weaponDamage;
public:
    Weapon(std::string name, int damage);
    std::string getWeaponName();
    int getWeaponDamage();
    void useWeapon();
    ~Weapon();
};

#endif
