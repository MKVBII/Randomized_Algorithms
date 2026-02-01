#include <iostream>

/**
 * recursive algorithm that computes the value of n-choose-r using the method that takes advantage of the algorithm from Pascal's Triangle 
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
 * computes the value of P(n, r) the number of ways to choose r distinct items from n and arrange them.
 */
int p_of_n_and_r(int n, int r) {
    int combinations = pascalsTriangle(n, r);
    int factorial = 1;
    for (int i = 1; i <= r; i++) {
        factorial *= i;
    }
    return combinations * factorial;
}

/**
 * main method
 */
int main() {
    std::cout << pascalsTriangle(5, 3) << std::endl;
    std::cout << p_of_n_and_r(5, 3) << std::endl;
    int test = 10 * 3 * 2 * 1;
    std::cout << test << std::endl;
    return 0;
}