
int count_evens(int number) {
    // Check if the provided number is less than 1
    if (number < 1) {
        return 0;
    }

    // Initialize the count variable to keep track of the number of even numbers
    int count = 0;

    // Iterate through numbers from 1 to the given number (inclusive)
    for (int i = 1; i <= number; ++i) {
        // Check if the number is even (i.e., divisible by 2 with a remainder of 0)
        if (i % 2 == 0) {
            count++;
        }
    }

    return count;
}