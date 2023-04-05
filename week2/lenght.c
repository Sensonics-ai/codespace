#include <stdio.h>     
#include <cs50.h>   //this is the library that contains the get_string function
#include <string.h> //this is the library that contains the strlen function

int main (void)
{
    string name = get_string("What is your name?\n");
    int n = strlen(name);   //this is how you get the length of a string
    printf("%i\n", n);  //this will print the length of the string

}


