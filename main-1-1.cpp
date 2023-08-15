
#include <iostream>
#include "Person.h"

// Declare the createPersonArray function
Person* createPersonArray(int n);

int main() {
    int n = 5; // You can change the value of n as needed
    
    Person* personArray = createPersonArray(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << " - Name: " << personArray[i].name
                  << ", Age: " << personArray[i].age << std::endl;
    }
    
    delete[] personArray; // Free memory
    
    return 0;
}