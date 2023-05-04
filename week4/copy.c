#include <cs50.h>       // string type
#include <ctype.h>      // toupper
#include <stdio.h>      // printf
#include <string.h>     // strlen

int main(void)
{
    char *s = get_string("s: ");       // get a string from the user

    char *t = s;                // copy the string into another variable

    if (strlen(t) > 0)           // check that the string is not empty
    {
        t[0] = toupper(t[0]);    // capitalize the first letter in the copy
    }

    printf("s: %s\n", s);        // print the original
    printf("t: %s\n", t);        // print the copy


}
