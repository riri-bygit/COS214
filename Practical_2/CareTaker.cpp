#include "CareTaker.h"

void CareTaker::addMemento(Memento* memento) {
    mementoList.push_back(memento);
}

Memento* CareTaker::getMemento(int index) {
    auto it = mementoList.begin();
    std::advance(it, index);
    return *it;
}

CareTaker::~CareTaker() {
    for (auto memento : mementoList) {
        delete memento;
    }
}
