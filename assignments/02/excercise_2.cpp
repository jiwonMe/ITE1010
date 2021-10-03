/**
 * @file excercise_2.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 2
 * @version 0.1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void print(int seq[], int n)
{
    for(int i=0; i<n; i++)
        std::cout << seq[i];
}

void permute(int seq[], int start, int end, int n)
{
    if (start == end)
    {
        print(seq, n);
        puts("");
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(seq[start], seq[i]);

            permute(seq, start + 1, end, n);

            swap(seq[start], seq[i]); // for backtracking
        }
    }
}

void permutNumbers(int n)
{
    int arr[n];
    for (int i=1; i <= n; i++)
    {
        arr[i-1] = i;
    }
    permute(arr, 0, n-1, n);
}

int main()
{
    int n;
    std::cin >> n;
    permutNumbers(n);
}
