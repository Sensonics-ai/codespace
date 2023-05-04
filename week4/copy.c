#include <cs50.h>       // string type
#include <ctype.h>      // toupper
#include <stdio.h>      // printf
#include <string.h>     // strlen
#include <stdlib.h>     // malloc and free

int main(void)
{
    char *s = get_string("s: ");       // get a string from the user

    char *t = malloc(strlen(s) + 1);  // allocate memory for another string +1 for the null character
                                      //at the moment t is a pointer to a string of length 0

  for (int i = 0, i < strlen(s); i <= n; i++) // copy string into memory
    {
        t[i] = s[i];                      // copy each character from s to  t
    }

    printf("s: %s\n", s);        // print the original
    printf("t: %s\n", t);        // print the copy


}
