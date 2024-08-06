#include "Boatman.h"

Soldiers* Boatman::clonis() {
    return new Boatman(*this);
}

void Boatman::engage() {
    prepare();
    execute();
}

void Boatman::disengage() {
    retreat();
    rest();
}

Boatman::~Boatman() {}

void Boatman::prepare() {
    cout << "Boatman preparing" << endl;
}

void Boatman::execute() {
    cout << "Boatman executing" << endl;
}

void Boatman::retreat() {
    cout << "Boatman retreating" << endl;
}

void Boatman::rest() {
    cout << "Boatman resting" << endl;
}
