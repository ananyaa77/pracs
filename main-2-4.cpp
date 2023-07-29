
#include <iostream>

// Function declaration from function-1-9.cpp
bool is_ascending(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {3, 6, 8, 10};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    bool result1 = is_ascending(array1, size1);
    bool result2 = is_ascending(array2, size2);
    bool result3 = is_ascending(array3, size3);

    std::cout << "Array 1 is in ascending order: " << std::boolalpha << result1 << std::endl;
    std::cout << "Array 2 is in ascending order: " << std::boolalpha << result2 << std::endl;
    std::cout << "Array 3 is in ascending order: " << std::boolalpha << result3 << std::endl;

    return 0;
}