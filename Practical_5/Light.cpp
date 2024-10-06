#include "Light.h"
#include <iostream>
using namespace std;
Light::Light() : isOn(false) {} 
string Light::getStatus()
{
    if (isOn)
    {
        cout << "Light is On" << endl;
    }
    else
    {
        cout << "Light is Off" << endl;
    }
}

void Light::performAction()
{
    isOn = !isOn;
}

std::string getDeviceType()
{
    return "Light\n";
}
