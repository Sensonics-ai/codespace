#include <stdio.h>
#include <cs50.h>
//In this case we need the cs50 library in order for the compiler to understand "get_int"

int main(void)
{
    int n = get_int("Size: ");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             printf("#");

        }
        printf("\n");
    }
}