/**
 * @file excercise_4.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homwork 1
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int gcd(int a, int b)
{
    if(a<b) return gcd(b,a);
    int q, r;
    while(1){
        q = a / b;
        r = a % b;
        if(!r) return b;
        a = b;
        b = r;
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a,b) << std::endl;
}