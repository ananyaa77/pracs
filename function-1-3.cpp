
#include <iostream>

void count_digits(int array[4][4]) {
    int digitCount[10] = {0};  // Initialize an array to count occurrences of each digit

    // Iterate through the matrix and count occurrences of each digit
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int digit = array[i][j];
            digitCount[digit]++;
        }
    }

    // Print the results in the specified format
    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << digitCount[i] << ";";
    }
    std::cout << std::endl;
}