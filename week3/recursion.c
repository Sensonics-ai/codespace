#include    <cs50.h>        //include the libraries of cs50
#include    <stdio.h>       //include the libraries for get_int and printf

void draw(int n);    //declare the function draw

int main(void)      //main function
{
    int height = get_int("Height: ");   //prompt the user for a height
    draw(1);    //call the function draw

}

void draw(int n)    //define the function draw
{

    if (n <= 0)     //if the height is less than or equal to 0
    {
        return;     //return
    }

    draw(n-1);      //call the function draw again
    for (int i = 1; i < n + 1; i++)    //loop through the height
    {

            printf("#");    //print the # symbol


    }
    printf("\n");       //print a new line
    
}