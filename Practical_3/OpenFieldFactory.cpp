#include "OpenFieldFactory.h"

Infantry* OpenFieldFactory::createInfantry() {
    return new Infantry();
}

Cavalry* OpenFieldFactory::createCavalry() {
    return new Cavalry();
}

Artillery* OpenFieldFactory::createArtillery() {
    return new Artillery();
}
