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
    //notice that  y is not in CAPS, that matters when you want to answer. You could add the following conditions in additional "elses" like the following:
    else if (c == 'Y')
    {
        printf("Agreed.\n");
    }
    //this however its not efficient. Something "smells" in this code. 
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
    // notice how we use single quotation 'marks' for single characters (chars) and double quotation marks for strings. This is a necessity in C. it
}