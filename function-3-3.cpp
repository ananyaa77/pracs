
#include <unordered_map>

double weighted_average(int array[], int n) {
    // Check if the number of elements is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Use an unordered_map to store the frequency of each element in the array
    std::unordered_map<int, int> frequency;

    // Calculate the frequency of each element in the array
    for (int i = 0; i < n; ++i) {
        frequency[array[i]]++;
    }

    // Calculate the weighted average using the formula Σ xi * wi / n
    double weightedSum = 0.0;
    for (const auto& entry : frequency) {
        weightedSum += entry.first * static_cast<double>(entry.second) / n;
    }

    return weightedSum;
}