
#include <iostream>

// Function declaration from function-1-14.cpp
void print_pass_fail(char grade);

int main() {
    char grade1 = 'A';
    char grade2 = 'D';
    char grade3 = 'F'; // Invalid grade

    print_pass_fail(grade1);
    print_pass_fail(grade2);
    print_pass_fail(grade3);

    return 0;
}