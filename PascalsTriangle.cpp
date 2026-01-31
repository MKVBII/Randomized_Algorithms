#include <iostream>

/**
 * recursive algorithm that computes the value of n-choose-r using the 
 * method that takes advantage of the algorithm from Pascal's Triangle 
 */
int pascalsTriangle(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else if (r > n) {
        return 0;
    }

    return pascalsTriangle(n - 1, r - 1) + pascalsTriangle(n - 1, r);
}

/**
 * main method
 */
int main() {
    std::cout << pascalsTriangle(5, 3) << std::endl;
    return 0;
}