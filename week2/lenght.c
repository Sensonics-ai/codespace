#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_string("What is your name?\n");

    int n = 0;
    while (name[n] != '\0')     //this is the same as name[n] != 0
    {
        n++;
    }
    printf ("%i\n", n); //this will print the lenght of the string
}