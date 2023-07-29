bool is_descending(int array[], int n) {
    // Check if the number of elements is greater than 0
    if (n > 0) {
        for (int i = 1; i < n; ++i) {
            // If any element is greater than the previous element, the array is not in descending order
            if (array[i] > array[i - 1]) {
                return false;
            }
        }
        // All elements are in descending order
        return true;
    }

    // If the size parameter is less than or equal to 0, return false
    return false;
}