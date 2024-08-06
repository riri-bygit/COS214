#include "Infantry.h"

Soldiers* Infantry::clonis() {
    return new Infantry(*this);
}

void Infantry::engage() {
    prepare();
    execute();
}

void Infantry::disengage() {
    retreat();
    rest();
}

Infantry::~Infantry() {}

void Infantry::prepare() {
    cout << "Infantry preparing" << endl;
}

void Infantry::execute() {
    cout << "Infantry executing" << endl;
}

void Infantry::retreat() {
    cout << "Infantry retreating" << endl;
}

void Infantry::rest() {
    cout << "Infantry resting" << endl;
}
