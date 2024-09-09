#include "FloodedSoil.h"

FloodedSoil::FloodedSoil() { yieldFactor = 0; }

int FloodedSoil::harvestCrops() { return yieldFactor; }

void FloodedSoil::irrigate() { std::cout << "Cannot irrigate flooded soil...\n"; }

std::string FloodedSoil::getName() { return "FloodedSoil"; }

void FloodedSoil::fertilize() { std::cout << "Cannot fertilize flooded soil...\n"; }
