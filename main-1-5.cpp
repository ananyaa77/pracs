

#include <iostream>

// Function declaration from function-1-5.cpp
int count_evens(int number);

int main() {
    int number1 = 10;
    int number2 = 20;
    int number3 = 5;

    int result1 = count_evens(number1);
    int result2 = count_evens(number2);
    int result3 = count_evens(number3);

    std::cout << "Number of even numbers between 1 and " << number1 << ": " << result1 << std::endl;
    std::cout << "Number of even numbers between 1 and " << number2 << ": " << result2 << std::endl;
    std::cout << "Number of even numbers between 1 and " << number3 << ": " << result3 << std::endl;

    return 0;
}