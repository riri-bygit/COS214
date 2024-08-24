#include "Legion.h"
#include <algorithm>

void Legion::move() {
    for (auto& unit : units) {
        unit->move();
    }
}

void Legion::fight() {
    for (auto& unit : units) {
        unit->fight();
    }
}

void Legion::add(UnitComponent* component) {
    units.push_back(component);
}

void Legion::remove(UnitComponent* component) {
    units.erase(std::remove(units.begin(), units.end(), component), units.end());
}
