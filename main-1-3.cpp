#include <iostream>

// Function declaration from function-1-3.cpp
int num_count(int array[], int n, int number);

int main() {
    int array[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int number_to_find = 2;

    int result = num_count(array, size, number_to_find);

    std::cout << "Number of occurrences of " << number_to_find << " in the array: " << result << std::endl;

    return 0;
}