#include    <cs50.h>        //include the libraries
#include    <stdio.h>       //include the libraries

void draw(int n);    //declare the function draw

int main(void)      //main function
{
    draw(1);    //call the function draw

}

void draw(int n)    //define the function draw
{
    for (int i = 1; i < n + 1; i++)    //loop through the height
    {

            printf("#");    //print the # symbol


    }
    printf("\n");       //print a new line
    draw(n + 1 );   //call the function draw again
}