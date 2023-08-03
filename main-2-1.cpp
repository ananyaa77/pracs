#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number);

int main() {
    std::string number1 = "13";
    std::string number2 = "5";
    std::string number3 = "119";

    print_binary_str(number1);
    print_binary_str(number2);
    print_binary_str(number3);

    return 0;
}