#include "DrySoil.h"


DrySoil::DrySoil() { yieldFactor = 1; }

int DrySoil::harvestCrops() { return yieldFactor; }

void DrySoil::irrigate() { std::cout << "Irrigating dry soil...\n"; }

std::string DrySoil::getName() { return "DrySoil"; }

void DrySoil::fertilize() { std::cout << "Fertilizing dry soil...\n"; }
