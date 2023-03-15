#include <stdio.h>
#include <cs50.h>


int main(void)
{
     int n;
     do
     {
     n = get_int("Size: ");
     }
     while (n < 1)
//we are telling the compile to do the following: get int n from the user and store that value in n, while checking that the value n matches our requirements, in this case, to be an Int.


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             printf("#");

        }
        printf("\n");
    }
}