
int num_count(int array[], int n, int number) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0;
    }

    // Count how many elements in the array are equal to the desired number
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}