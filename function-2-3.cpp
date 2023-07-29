#include <iostream>

void two_five_nine(int array[], int n) {
    // Initialize counts for 2, 5, and 9 to zero
    int count_two = 0;
    int count_five = 0;
    int count_nine = 0;

    // Iterate through the array and count occurrences using a switch statement
    for (int i = 0; i < n; ++i) {
        switch (array[i]) {
            case 2:
                count_two++;
                break;
            case 5:
                count_five++;
                break;
            case 9:
                count_nine++;
                break;
            default:
                break;
        }
    }

    // Print the results in the required format
    std::cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine << ";" << std::endl;
}