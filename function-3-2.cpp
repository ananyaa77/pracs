
#include <algorithm> // For std::sort

int median_array(int array[], int n) {
    // Check if the number of elements is even or less than 1
    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    // Sort the array in ascending order
    std::sort(array, array + n);

    // Calculate the index of the middle element
    int midIndex = n / 2;

    // Return the middle element as the median
    return array[midIndex];
}