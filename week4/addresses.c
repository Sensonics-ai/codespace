#include    <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;        // p is a pointer to an integer, and it points to the address of n
    printf("%p\n", p);  // print the address of n
}