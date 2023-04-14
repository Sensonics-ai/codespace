#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get line of text
    string s = GetString();

    // Search for \0 (NULL) character
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c