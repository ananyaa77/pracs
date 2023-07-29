
int min_element(int array[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0;
    }

    // Initialize the minimum variable to the first element of the array
    int minimum = array[0];

    // Iterate through the array and update the minimum element if a smaller one is found
    for (int i = 1; i < n; ++i) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    return minimum;
}