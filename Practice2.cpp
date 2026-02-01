#include <vector>
#include <random>
#include <iostream>

/**
 * creates an binary vector who's elements are randomly placed
 */
std::vector<int> randomBinaryArray(const size_t& length) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distribution(0, 1);
    std::vector<int> vector(length);
    for (int i = 0; i < length; i++) {
        vector[i] = distribution(gen);
    }
    return vector;
}

/**
 * selects a random element from a randomly seeded binary array
 */
int randomElementSelector(const std::vector<int>& array) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distribution(0, sizeof(array));
    int idx = distribution(gen);

    return array[idx];
}

/**
 * main method
 */
int main() {
    std::vector<int> arr = randomBinaryArray(10);
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << randomElementSelector(arr);

    return 0;
}