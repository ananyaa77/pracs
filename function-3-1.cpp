
// function-1-11.cpp
bool is_fanarray(int array[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return false;
    }

    int left = 0;          // Pointer for the left side of the array
    int right = n - 1;     // Pointer for the right side of the array

    // Iterate through the array from both ends towards the middle
    while (left < right) {
        // Check if the elements are in ascending order
        if (array[left] != array[right] || array[left] > array[left + 1]) {
            return false;
        }
        left++;
        right--;
    }

    // If the loop finishes without returning false, it's a fan array
    return true;
}