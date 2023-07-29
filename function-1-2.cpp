
double array_mean(int array[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Calculate the sum of elements in the array
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    // Calculate the average and cast sum to double for precise division
    double average = static_cast<double>(sum) / n;
    return average;
}