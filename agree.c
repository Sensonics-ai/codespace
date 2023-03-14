#include <cs50.h>
//get int function
#include <stdio.h>
//get printf function

int main(void)
{
    char c = get_char("Do you agree?\n");

    if (c == 'y')
    {
        printf("Agreed.\n");

    }
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
    // notice how we use single quotation 'marks' for single characters (chars) and double quotation marks for strings. This is a necessity in C. it
}