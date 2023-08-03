
#include <iostream>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    int decimal_value = std::stoi(decimal_number);
    std::bitset<32> binary_value(decimal_value); // Assuming a 32-bit representation
    std::cout << binary_value.to_string().substr(binary_value.to_string().find('1')) << std::endl;
}