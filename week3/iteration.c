#include    <cs50.h>        //include the libraries
#include    <stdio.h>       //include the libraries

void draw(int n);       //declare the function draw

int main (void)     //main function
{
    int height = get_int("Height: ");       //prompt the user for a height
    draw(height);       //call the function draw

}

void draw(int n)        //define the function draw
{
    for (int i = 1; i < n + 1; i++)     //loop through the height
    {
        for (int j = 1; j < i + 1; j++)     //loop through the width
        {
            printf("#");        //print the # symbol
        }
        printf("\n");       //print a new line
    }
}