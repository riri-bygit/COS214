#ifndef Artillery_H
#define Artillery_H

#include "LegionUnit.h"
#include <string>

class Artillery : public LegionUnit {
protected:
    int mobility;
    int flankAttackBonus;

public:
    Artillery() : LegionUnit("Artillery", 120, 60, 20), mobility(30), flankAttackBonus(25) {}

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


class WoodlandArtillery : public Artillery {
protected:
    int terrainBonus;

public:
    WoodlandArtillery() : Artillery(), terrainBonus(15) {
        name = "Woodland Artillery";  // Override name for specialization
    }

    void ambush() {
        std::cout << name << " ambushing in the woods!\n";
    }
};

// Riverbank Artillery class inheriting from Artillery
class RiverbankArtillery : public Artillery {
protected:
    int riverCrossingExpertise;

public:
    RiverbankArtillery() : Artillery(), riverCrossingExpertise(20) {
        name = "Riverbank Artillery";  // Override name for specialization
    }

    void holdRiverbank() {
        std::cout << name << " holding the riverbank!\n";
    }
};

// OpenField Artillery class inheriting from Artillery
class OpenFieldArtillery : public Artillery {
protected:
    int openFieldMobility;

public:
    OpenFieldArtillery() : Artillery(), openFieldMobility(10) {
        name = "OpenField Artillery";  // Override name for specialization
    }

    void advanceAcrossField() {
        std::cout << name << " advancing across the field!\n";
    }
};


#endif
