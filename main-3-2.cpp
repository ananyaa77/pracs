
#include <iostream>

// Function declaration from function-1-12.cpp
int median_array(int array[], int n);

int main() {
    int array1[] = {3, 5, 2, 1, 4};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {1, 2, 3, 4};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {6};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int array4[] = {2, 4, 1, 5};
    int size4 = sizeof(array4) / sizeof(array4[0]);

    int result1 = median_array(array1, size1);
    int result2 = median_array(array2, size2);
    int result3 = median_array(array3, size3);
    int result4 = median_array(array4, size4);

    std::cout << "Median of array1: " << result1 << std::endl;
    std::cout << "Median of array2: " << result2 << std::endl;
    std::cout << "Median of array3: " << result3 << std::endl;
    std::cout << "Median of array4: " << result4 << std::endl;

    return 0;
}