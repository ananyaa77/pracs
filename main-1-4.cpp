
#include <iostream>
#include "Person.h"

// Declare the shallowCopyPersonList function
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 3; // You can change the value of n as needed
    
    PersonList originalList;
    originalList.numPeople = n;
    originalList.people = new Person[n];
    
    for (int i = 0; i < n; ++i) {
        originalList.people[i].name = "Bob";
        originalList.people[i].age = 30;
    }
    
    PersonList copiedList = shallowCopyPersonList(originalList);
    
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << " - Name: " << originalList.people[i].name
                  << ", Age: " << originalList.people[i].age << std::endl;
    }
    
    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << " - Name: " << copiedList.people[i].name
                  << ", Age: " << copiedList.people[i].age << std::endl;
    }
    
    delete[] originalList.people; // Free memory
    
    return 0;
}