
int max_element(int array[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0;
    }

    // Initialize the maximum variable to the first element of the array
    int maximum = array[0];

    // Iterate through the array and update the maximum element if a larger one is found
    for (int i = 1; i < n; ++i) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }

    return maximum;
}