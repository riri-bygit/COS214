#include "Artillery.h"
#include <iostream>

Artillery::Artillery(const std::string& sup, const std::string& bomb) : support(sup), bombardment(bomb) {}

void Artillery::move() {
    std::cout << "Artillery is repositioned.\n";
}

void Artillery::attack() {
    std::cout << "Artillery bombards the enemy: " << bombardment << ".\n";
}
