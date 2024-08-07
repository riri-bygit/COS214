#ifndef WEAPON_H
#define WEAPON_H

#include <string>

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
