
#include <iostream>

void count_digits(int array[4][4]);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {0, 1, 0, 2},
        {3, 4, 5, 6},
        {7, 8, 9, 0}
    };

    count_digits(matrix);

    return 0;
}