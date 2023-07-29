
#include <iostream>

// Function declaration from function-1-8.cpp
void two_five_nine(int array[], int n);

int main() {
    int array1[] = {2, 5, 9, 2, 2, 9, 9};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {2, 5, 5, 5, 9, 9, 9};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {9, 9, 9};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int array4[] = {};
    int size4 = 0;

    two_five_nine(array1, size1);
    two_five_nine(array2, size2);
    two_five_nine(array3, size3);
    two_five_nine(array4, size4);

    return 0;
}