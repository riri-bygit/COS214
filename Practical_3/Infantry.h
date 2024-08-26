#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"

class Infantry : public LegionUnit {
protected:
    int defenseBonus;
    int combat;
public:
   Infantry() : LegionUnit("Infantry", 100, 50, 30), combat(20), defenseBonus(10) {}
    void move() override;
    void attack() override;
};

// Woodland Infantry class inheriting from Infantry
class WoodlandInfantry : public Infantry {
protected:
    int terrainBonus;

public:
    WoodlandInfantry() : Infantry(), terrainBonus(15) {
        name = "Woodland Infantry";  // Override name for specialization
    }

    void ambush() {
        std::cout << name << " ambushing in the woods!\n";
    }
};

// Riverbank Infantry class inheriting from Infantry
class RiverbankInfantry : public Infantry {
protected:
    int riverCrossingExpertise;

public:
    RiverbankInfantry() : Infantry(), riverCrossingExpertise(20) {
        name = "Riverbank Infantry";  // Override name for specialization
    }

    void holdRiverbank() {
        std::cout << name << " holding the riverbank!\n";
    }
};

// OpenField Infantry class inheriting from Infantry
class OpenFieldInfantry : public Infantry {
protected:
    int openFieldMobility;

public:
    OpenFieldInfantry() : Infantry(), openFieldMobility(10) {
        name = "OpenField Infantry";  // Override name for specialization
    }

    void advanceAcrossField() {
        std::cout << name << " advancing across the field!\n";
    }
};


#endif
