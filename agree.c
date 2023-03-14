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
}