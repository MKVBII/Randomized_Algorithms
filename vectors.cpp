#include <vector>
#include <iostream>

std::vector<int> makeVector(int& n) {
    std::vector<int> vector(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            vector[i] = 0;
        } else {
            vector[i] = 1;
        }
    }
    return vector;
}

int main() {
    int num = 7;
    std::vector<int> array = makeVector(num);
    std::cout << "array contents" << std::endl;
    int oneCount = 0;
    int zeroCount = 0;
    for (int number : array) {
        std::cout << number << std::endl;
        if (number == 1) {
            oneCount++;
        } else {
            zeroCount++;
        }
    }
    std::cout << "one count: " << oneCount << "\nzero count: " << zeroCount << std::endl;
}