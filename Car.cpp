#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.9); // Apply 10% reduction
}