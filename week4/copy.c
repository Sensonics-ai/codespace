#include <cs50.h>       // string type
#include <ctype.h>      // toupper
#include <stdio.h>      // printf
#include <string.h>     // strlen

int main(void)
{
    string s = get_string("s: ");       // get a string from the user

    string t = s;                // copy the string into another variable

    t[0] = toupper(t[0]);        // capitalize the first letter in the copy

    printf("s: %s\n", s);        // print the original
    printf("t: %s\n", t);        // print the copy


}
