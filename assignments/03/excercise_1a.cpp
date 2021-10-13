/**
 * @file excercise_1a.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Homework 3
 * @version 0.1
 * @date 2021-10-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int frequency[26];

void count_chars(char text[])
{
    if (text[0] == '\0')
    {
        for (size_t i = 0; i < 26; i++)
        {
            printf("%c, %c : %d\n", char('A'+i), char('a'+i), frequency[i]);
        }
        return;
    }
    int c = int(text[0]);
    if ('z' >= c && 'A' <= c)
    {
        frequency[(c >= 'a' ? c - 32 : c) -'A']++;
    }
    count_chars(text + 1);
}

int main()
{
    char text[] = "Today is a nice day for having a little picnic";
    count_chars(text);
    return 0;
}