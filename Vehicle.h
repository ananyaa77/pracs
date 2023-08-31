
#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
public:
    Vehicle(int ID);
    int getID() const;
    int getParkingDuration() const;

private:
    std::time_t timeofEntry;
    int ID;
};

#endif // VEHICLE_H