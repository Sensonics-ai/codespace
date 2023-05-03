#include    <stdio.h>

int main(void)
{
    char *s = "Uri";    // s is a pointer to a string
    printf("%c\n", *s); // *s is the first character of the string
    printf("%c\n", *(s+1));     // *(s+1) is the second character of the string
    printf("%c\n", *(s+2));     // *(s+2) is the third character of the string
}