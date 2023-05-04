#include <cs50.h>       // string type
#include <ctype.h>      // toupper
#include <stdio.h>      // printf
#include <string.h>     // strlen
#include <stdlib.h>     // malloc and free

int main(void)
{
    char *s = get_string("s: ");       // get a string from the user

    char *t = malloc(strlen(s) + 1);  // allocate memory for another string

    if (strlen(t) > 0)           // check that the string is not empty
    {
        t[0] = toupper(t[0]);    // capitalize the first letter in the copy
    }

    printf("s: %s\n", s);        // print the original
    printf("t: %s\n", t);        // print the copy


}
