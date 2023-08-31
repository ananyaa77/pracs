#include <iostream>
#include <vector>
#include "Vehicle.h"   // Include your base class header
#include "Car.h"       // Include your derived class headers
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;

    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;

    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;

    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    for (int i = 0; i < numCars; ++i) {
        vehicles.push_back(new Car(i + 1));
    }

    for (int i = 0; i < numBuses; ++i) {
        vehicles.push_back(new Bus(i + 1));
    }

    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(i + 1));
    }

    for (Vehicle* vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID() << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds\n";
        delete vehicle;
    }

    return 0;
}