
#include <iostream>

// Function declaration from function-1-4.cpp
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size = sizeof(array1) / sizeof(array1[0]);

    int result = sum_two_arrays(array1, array2, size);

    std::cout << "Sum of two arrays: " << result << std::endl;

    return 0;
}