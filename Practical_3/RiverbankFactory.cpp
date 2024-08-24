#include "RiverbankFactory.h"

Infantry* RiverbankFactory::createInfantry() {
    return new Infantry();
}

Cavalry* RiverbankFactory::createCavalry() {
    return new Cavalry();
}

Artillery* RiverbankFactory::createArtillery() {
    return new Artillery();
}
