/**
 * @file excercise_3.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 1
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    int n = 0;
    for(;;)
    {
        int input;
        std::cin >> input;
        if (!input) break;
        n+=input;
        std::cout << n << std::endl;
    }
}