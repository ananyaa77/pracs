
#include <iostream>

// Function declaration from function-1-10.cpp
bool is_descending(int array[], int n);

int main() {
    int array1[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {10, 8, 6, 3};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    bool result1 = is_descending(array1, size1);
    bool result2 = is_descending(array2, size2);
    bool result3 = is_descending(array3, size3);

    std::cout << "Array 1 is in descending order: " << std::boolalpha << result1 << std::endl;
    std::cout << "Array 2 is in descending order: " << std::boolalpha << result2 << std::endl;
    std::cout << "Array 3 is in descending order: " << std::boolalpha << result3 << std::endl;
    return 0;
}