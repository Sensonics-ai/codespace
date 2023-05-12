#include   <stdio.h>    // printf

int main(void)
{
    int list [3];   // array of 3 integers
    list[0] = 1;    // set first element to 1
    list[1] = 2;    // set second element to 2
    list[2] = 3;    // set third element to 3

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);    // print each element
    }

}