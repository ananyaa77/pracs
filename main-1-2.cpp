
#include <iostream>

// Function declaration from function-1-2.cpp
double array_mean(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {-2, 5, -8, 10};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {7};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int array4[] = {};
    int size4 = sizeof(array4) / sizeof(array4[0]);

    double result1 = array_mean(array1, size1);
    double result2 = array_mean(array2, size2);
    double result3 = array_mean(array3, size3);
    double result4 = array_mean(array4, size4);

    std::cout << "Mean 1: " << result1 << std::endl;
    std::cout << "Mean 2: " << result2 << std::endl;
    std::cout << "Mean 3: " << result3 << std::endl;
    std::cout << "Mean 4: " << result4 << std::endl;

    return 0;
}