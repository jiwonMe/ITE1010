/**
 * @file excercise_2.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 1
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

// 2. Determine the maximum of the three values entered by the user.
int get_max(int a[])
{
	return
		a[0]>=a[1]? a[0]>=a[2] ? a[0] : a[2] :
		a[1]>=a[2] ? a[1] : a[2];
}

int main()
{
	int n[3];
	std::cin >> n[0] >> n[1] >> n[2]; // 1.	Read three integer values using cin.
	std::cout << get_max(n) << std::endl; // 3.	Print the maximum of this three values using cout.
}