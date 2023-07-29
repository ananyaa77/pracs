
int sum_two_arrays(int array[], int secondarray[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0;
    }

    // Initialize the sum variable to keep track of the total sum
    int sum = 0;

    // Iterate through both arrays simultaneously and calculate the sum
    for (int i = 0; i < n; ++i) {
        sum += array[i] + secondarray[i];
    }

    return sum;
}