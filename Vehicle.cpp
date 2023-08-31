#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int ID) : ID(ID) {
    timeofEntry = std::time(nullptr); // Initialize timeofEntry to the current time
}

int Vehicle::getID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int duration = static_cast<int>(currentTime - timeofEntry);
    return duration;
}