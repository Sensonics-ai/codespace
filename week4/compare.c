#include <cs50.h>       // cs50.h is needed for get_string
#include <stdio.h>      // stdio.h is needed for printf
#include <string.h>     // string.h is needed for strcmp

int main(void)        // main function
{
    string s = get_string("s: "); // s is a pointer to a string
    string t = get_string("t: ");   // t is a pointer to a string

    if (strcmp(s, t) == 0)  // strcmp compares the strings and returns 0 if they are the same
    {
        printf("Same\n");   // strcmp returns 0 if the strings are the same
    }
    else
    {
        printf("Different\n");  // strcmp returns a non-zero value if the strings are different
    }

}