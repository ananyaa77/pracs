
#include <iostream>

// Function declaration from function-1-15.cpp
double sum_even(double array[], int n);

int main() {
    double array1[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    double array2[] = {2.0, 4.0, 6.0, 8.0};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    double array3[] = {3.0};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    double result1 = sum_even(array1, size1);
    double result2 = sum_even(array2, size2);
    double result3 = sum_even(array3, size3);

    std::cout << "Sum of elements in even positions in array1: " << result1 << std::endl;
    std::cout << "Sum of elements in even positions in array2: " << result2 << std::endl;
    std::cout << "Sum of elements in even positions in array3: " << result3 << std::endl;

    return 0;
}