#include "Device.h"
#include "DeviceDecorator.h"

int main() {
    // Legacy thermostat that doesn't have smart capabilities
    LegacyThermostat* legacyThermostat = new LegacyThermostat(20);

    // Wrap the legacy thermostat in a SmartThermostatIntegrator decorator
    SmartThermostatIntegrator* smartThermostat = new SmartThermostatIntegrator(legacyThermostat);

    // Now we can interact with the legacy thermostat as if it were smart
    smartThermostat->performAction();
    std::cout << smartThermostat->getStatus() << std::endl;

    // Example with EnergySavingDecorator
    Light* light = new Light();
    EnergySavingDecorator* energySavingLight = new EnergySavingDecorator(light);

    // Activate energy-saving mode and perform action
    energySavingLight->activateEnergySavingMode();
    energySavingLight->performAction();
    std::cout << energySavingLight->getStatus() << std::endl;

    // Clean up
    delete smartThermostat;
    delete legacyThermostat;
    delete energySavingLight;
    delete light;

    return 0;
}
