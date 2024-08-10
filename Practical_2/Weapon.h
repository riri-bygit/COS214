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
    // this default in new
    Weapon();  // Default constructor
    Weapon(std::string name, int damage);
    std::string getWeaponName();
    int getWeaponDamage();
    void useWeapon();
    // Weapon getWeapon(); //new
    ~Weapon();
};

#endif
