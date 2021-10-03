/**
 * @file excercise_1.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 2
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

// function: compute the value of th binomial coefficient C(n,r)
int combination(int n, int r) {
    if (n < r) return 0;
    if (!r || n == r) return 1;
    return combination(n-1, r) + combination(n-1, r-1);
}

int main() {
    int n, r;
    std::cin >> n >> r;
    std::cout << combination(n,r);
}