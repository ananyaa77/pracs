
#include <iostream>

// Function declaration from function-1-7.cpp
int max_element(int array[], int n);

int main() {
    int array1[] = {5, 2, 8, 1, 4};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {10, -3, 7, 0, -5};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {100};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int result1 = max_element(array1, size1);
    int result2 = max_element(array2, size2);
    int result3 = max_element(array3, size3);

    std::cout << "Maximum element in array1: " << result1 << std::endl;
    std::cout << "Maximum element in array2: " << result2 << std::endl;
    std::cout << "Maximum element in array3: " << result3 << std::endl;

    return 0;
}