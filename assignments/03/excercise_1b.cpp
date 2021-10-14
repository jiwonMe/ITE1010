/**
 * @file excercise_1b.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 3
 * @version 0.1
 * @date 2021-10-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <algorithm>


void draw_plot(int frequency[])
{
    int max = *std::max_element(frequency, frequency + 26);
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            std::cout << (max - i <= frequency[j] ? '*' : ' ');
        }
        std::cout << std::endl;
    }
    for (int i = 'A'; i <= 'Z'; i++)
    {
        std::cout << char(i);
    }
    std::cout << std::endl;
}

void count_chars(char text[])
{
    static int frequency[26];
    if (text[0] == '\0')
    {
        draw_plot(frequency);
        return;
    }
    int c = int(text[0]);
    if ('z' >= c && 'A' <= c)
    {
        frequency[(c >= 'a' ? c - 32 : c) - 'A']++;
    }
    count_chars(text + 1);
}

int main()
{
    char text[] = "Today is a nice day for having a little picnic";
    count_chars(text);
    return 0;
}