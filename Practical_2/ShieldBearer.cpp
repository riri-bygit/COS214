#include "ShieldBearer.h"

Soldiers* ShieldBearer::clonis() {
    return new ShieldBearer(*this);
}

void ShieldBearer::engage() {
    prepare();
    execute();
}

void ShieldBearer::disengage() {
    retreat();
    rest();
}

ShieldBearer::~ShieldBearer() {}

void ShieldBearer::prepare() {
    cout << "ShieldBearer preparing" << endl;
}

void ShieldBearer::execute() {
    cout << "ShieldBearer executing" << endl;
}

void ShieldBearer::retreat() {
    cout << "ShieldBearer retreating" << endl;
}

void ShieldBearer::rest() {
    cout << "ShieldBearer resting" << endl;
}
