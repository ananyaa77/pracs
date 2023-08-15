
#include <iostream>
#include "Person.h"

// Declare the createPersonList function
PersonList createPersonList(int n);

int main() {
    int n = 3; // You can change the value of n as needed
    
    PersonList personList = createPersonList(n);
    
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << " - Name: " << personList.people[i].name
                  << ", Age: " << personList.people[i].age << std::endl;
    }
    
    delete[] personList.people; // Free memory
    
    return 0;
}