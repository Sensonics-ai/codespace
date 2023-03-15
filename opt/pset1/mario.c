#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n = get_int("Size: ");
    while (n < 1)
    {
         n = get_int("Size: ");
    }
//voilà! we have now solved that, but there 's still a slight inconvenience... we have duplicated the code.
//turns out C can go around this with another functionality

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             printf("#");

        }
        printf("\n");
    }
}