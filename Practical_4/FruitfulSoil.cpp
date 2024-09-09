#include "FruitfulSoil.h"


FruitfulSoil::FruitfulSoil() { yieldFactor = 3; }

int FruitfulSoil::harvestCrops() { return yieldFactor; }

void FruitfulSoil::irrigate() { std::cout << "Irrigating fruitful soil...\n"; }

std::string FruitfulSoil::getName() { return "FruitfulSoil"; }

void FruitfulSoil::fertilize() { std::cout << "Fertilizing fruitful soil...\n"; }
