
#include <iostream>

// Function declaration from function-1-13.cpp
double weighted_average(int array[], int n);

int main() {
    int array1[] = {1, 2, 1, 4, 1, 3};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {2, 4, 4, 2};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {6};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    double result1 = weighted_average(array1, size1);
    double result2 = weighted_average(array2, size2);
    double result3 = weighted_average(array3, size3);

    std::cout << "Weighted average of array1: " << result1 << std::endl;
    std::cout << "Weighted average of array2: " << result2 << std::endl;
    std::cout << "Weighted average of array3: " << result3 << std::endl;

    return 0;
}