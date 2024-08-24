#include "WoodlandFactory.h"

Infantry* WoodlandFactory::createInfantry() {
    return new Infantry();
}

Cavalry* WoodlandFactory::createCavalry() {
    return new Cavalry();
}

Artillery* WoodlandFactory::createArtillery() {
    return new Artillery();
}
