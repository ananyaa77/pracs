
#include <iostream>

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    int array1[] = {5, 2, 9, 1, 7};
    int array2[] = {15, 8, 3, 12, 6};
    int emptyArray[] = {};

    int sum1 = sum_min_max(array1, 5);
    int sum2 = sum_min_max(array2, 5);
    int emptyArraySum = sum_min_max(emptyArray, 0);

    std::cout << "Sum of Min and Max for array1: " << sum1 << std::endl;
    std::cout << "Sum of Min and Max for array2: " << sum2 << std::endl;
    std::cout << "Empty Array Result: " << emptyArraySum << std::endl;

    return 0;
}