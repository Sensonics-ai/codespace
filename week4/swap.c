#include <stdio.h>

void swap(int a, int b);    // function prototype

int main(void)        // main function
{
    int x = 1;
    int y = 2;

    printf("x: %i, y: %i\n", x, y); // print x and y
    swap(x, y);                    // swap x and y
        printf("x: %i, y: %i\n", x, y); // print x and y
    }

void swap(int a, int b)   // function definition
{
    int tmp = a;
    a = b;
    b = tmp;
}

