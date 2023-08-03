
#include <iostream>

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
    int palindromeArray[] = {1, 2, 3, 2, 1};
    int nonPalindromeArray[] = {1, 2, 3, 4, 5};
    int emptyArray[] = {};

    int palindromeSum = sum_if_palindrome(palindromeArray, 5);
    int nonPalindromeSum = sum_if_palindrome(nonPalindromeArray, 5);
    int emptyArraySum = sum_if_palindrome(emptyArray, 0);

    std::cout << "Palindrome Sum: " << palindromeSum << std::endl;
    std::cout << "Non-Palindrome Result: " << nonPalindromeSum << std::endl;
    std::cout << "Empty Array Result: " << emptyArraySum << std::endl;

    return 0;
}