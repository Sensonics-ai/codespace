#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: "); // s is a pointer to a string
    string t = get_string("t: ");   // t is a pointer to a string
    if (s == t) // compare the addresses of the two strings
    {
        printf("Same\n");   // if the addresses are the same, the strings are the same
    }
    else
    {
        printf("Different\n");  // if the addresses are different, the strings are different
    }

}