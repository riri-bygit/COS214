#ifndef CARETAKER_H
#define CARETAKER_H


#include "Memento.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

class CareTaker {
private:
    std::list<Memento*> mementoList;
public:
    void addMemento(Memento* memento);
    Memento* getMemento(int index);
    ~CareTaker();
};

#endif
