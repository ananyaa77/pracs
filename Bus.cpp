#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.75); // Apply 25% reduction
}