/**
 * @file excercise_3.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 2
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int sum_down(int x)
{
    if (x >= 0)
    {
        x = x - 1;
        int y = x + sum_down(x);
        return y + sum_down(x);
    }
    else
    {
        return 1;
    }
}

int sum_down_no_recursion(const double x)
{
    if (x <= 0) return 1;
    double current = 1, next = 0;
    for (int i = 0; i < x; i++)
    {
        next = 2 * current + i;
        current = next;
    }
    return current;
}

int sum_down_using_loop_memoization(int x)
{
    int* result = new int[x];
    result[0] = 1;

    int i;
    for(i = 0; i <= x; i++)
    {
        result[i+1] = 2 * result[i] + i;
    }
    return result[i-1];
}

int main()
{
    int n;
    for(n = 0; sum_down(n) < 10e5; n++)
    {
        std::cout << n << " " << sum_down(n) << std::endl;
    }
    std::cout << n << " " << sum_down_no_recursion(n) << std::endl;
}
