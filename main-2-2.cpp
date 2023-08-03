
#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary1[] = {1, 0, 1};
    int binary2[] = {1, 1, 0, 0, 1};
    int binary3[] = {1, 1, 1, 1, 1, 0, 1};

    int number1 = binary_to_int(binary1, 3);
    int number2 = binary_to_int(binary2, 5);
    int number3 = binary_to_int(binary3, 7);

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;

    return 0;
}