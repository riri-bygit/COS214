#include "Light.h"
#include <iostream>
using namespace std;
Light::Light(LegacyLight *l) : light(l)
{
    isOn = false;
}
std::string Light::getStatus() {
    // Assuming you have some member variables to check the status
    return isOn ? "Light is on." : "Light is off.";
}


void Light::performAction()
{
    isOn = !isOn;
}

std::string Light::getDeviceType()
{
    return "Light\n";
}

void Light::turnOn()
{
    if (!isOn)
    {
        isOn = true;
    }
    getStatus();
}
void Light::turnOff()
{
    if (isOn)
    {
        isOn = false;
    }
    getStatus();
}

Light::~Light()
{
}