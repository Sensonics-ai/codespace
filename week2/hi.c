#include <stdio.h>

int main(void)
{
    char c1 = 'H';  //this is a character, it is a single letter, or a single symbol
    char c2 = 'i';
    char c3 = '!';
    char c4 = '\0'; //this is the null character, it is used to indicate the end of a string

    printf("%c%c%c%c\n", c1, c2, c3, c4); //this is how you print a string, you print each character individually, and then you print the null character at the end
}