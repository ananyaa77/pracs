
#include <iostream>

// Function declaration from function-1-11.cpp
bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {2, 4, 4, 2};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {1, 2, 1, 2, 1};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int array4[] = {1, 3, 5, 4, 2};
    int size4 = sizeof(array4) / sizeof(array4[0]);

    bool result1 = is_fanarray(array1, size1);
    bool result2 = is_fanarray(array2, size2);
    bool result3 = is_fanarray(array3, size3);
    bool result4 = is_fanarray(array4, size4);

    std::cout << "Array 1 is a fan array: " << std::boolalpha << result1 << std::endl;
    std::cout << "Array 2 is a fan array: " << std::boolalpha << result2 << std::endl;
    std::cout << "Array 3 is a fan array: " << std::boolalpha << result3 << std::endl;
    std::cout << "Array 4 is a fan array: " << std::boolalpha << result4 << std::endl;

    return 0;
}