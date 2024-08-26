#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include <string>

class Cavalry : public LegionUnit {
protected:
    int mobility;
    int flankAttackBonus;

public:
    Cavalry() : LegionUnit("Cavalry", 120, 60, 20), mobility(30), flankAttackBonus(25) {}

    void performFlankingManeuver() {
        std::cout << name << " performing flanking maneuver!\n";
    }

    void move() override {
        std::cout << name << " moving quickly!\n";
    }

    void attack() override {
        std::cout << name << " attacking with impact!\n";
    }
};


class WoodlandCavalry : public Cavalry {
protected:
    int terrainBonus;

public:
    WoodlandCavalry() : Cavalry(), terrainBonus(15) {
        name = "Woodland Cavalry";  // Override name for specialization
    }

    void ambush() {
        std::cout << name << " ambushing in the woods!\n";
    }
};

// Riverbank Cavalry class inheriting from Cavalry
class RiverbankCavalry : public Cavalry {
protected:
    int riverCrossingExpertise;

public:
    RiverbankCavalry() : Cavalry(), riverCrossingExpertise(20) {
        name = "Riverbank Cavalry";  // Override name for specialization
    }

    void holdRiverbank() {
        std::cout << name << " holding the riverbank!\n";
    }
};

// OpenField Cavalry class inheriting from Cavalry
class OpenFieldCavalry : public Cavalry {
protected:
    int openFieldMobility;

public:
    OpenFieldCavalry() : Cavalry(), openFieldMobility(10) {
        name = "OpenField Cavalry";  // Override name for specialization
    }

    void advanceAcrossField() {
        std::cout << name << " advancing across the field!\n";
    }
};


#endif
