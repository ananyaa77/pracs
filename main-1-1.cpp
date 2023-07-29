
#include <iostream>

// Function declaration from function-1-1.cpp
int array_sum(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {-2, 5, -8, 10};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {7};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int array4[] = {};
    int size4 = sizeof(array4) / sizeof(array4[0]);

    int result1 = array_sum(array1, size1);
    int result2 = array_sum(array2, size2);
    int result3 = array_sum(array3, size3);
    int result4 = array_sum(array4, size4);

    std::cout << "Sum 1: " << result1 << std::endl;
    std::cout << "Sum 2: " << result2 << std::endl;
    std::cout << "Sum 3: " << result3 << std::endl;
    std::cout << "Sum 4: " << result4 << std::endl;

    return 0;
}