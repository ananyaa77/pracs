#include <iostream>

int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {
        {1, 1, 3, 5},
        {1, 0, 4, 2},
        {9, 2, 1, 8},
        {6, 7, 3, 4}
    };

    int result = sum_diagonal(array);
    std::cout << "Sum of the main diagonal: " << result << std::endl;

    return 0;
}
