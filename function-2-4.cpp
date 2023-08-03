
#include <iostream>
#include <limits>

int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    
    int min_val = std::numeric_limits<int>::max();
    for (int i = 0; i < length; i++) {
        if (integers[i] < min_val) {
            min_val = integers[i];
        }
    }
    
    return min_val;
}

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    
    int max_val = std::numeric_limits<int>::min();
    for (int i = 0; i < length; i++) {
        if (integers[i] > max_val) {
            max_val = integers[i];
        }
    }
    
    return max_val;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    
    int min_val = array_min(integers, length);
    int max_val = array_max(integers, length);
    
    return min_val + max_val;
}