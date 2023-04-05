//I'm going to write a code that asks the user for a string, and then prints the string in uppercase
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>  //this is the library that contains the toupper function

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)  //this is how you get the length of a string
    {
        printf("%c", toupper(s[i]));    //this ctype formula will print the character in uppercase
    }
    printf("\n");
}