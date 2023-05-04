#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("i: "); // get_int is a function that returns an integer
    int j = get_int("j: "); // get_int is a function that returns an integer

    if (i == j) // compare the values of i and j
    {
        printf("Same\n");   // print "Same" if i and j are equal
    }
    else
    {
        printf("Different\n");  // print "Different" if i and j are not equal
    }

}