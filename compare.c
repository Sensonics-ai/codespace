#include <cs50.h>
//get int function
#include <stdio.h>
//get printf function

int main(void)

{
   int x = get_int("what's x?\n");
   int y = get_int("what's y?\n");

   if (x < y)
   {
    printf("x is less than y\n");
    }
    else if (x > y)
    {
    printf("x is not less than y\n");
    }
    else if (x == y)
    {
    printf("x is equal to y\n");
    }

}