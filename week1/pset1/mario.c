//include the library of default functions that I will need.
#include <stdio.h>
#include <cs50.h>

//include the library of functions that I will create/define further down
int get_size(void);
void print_grid(int size);

//start the program
int main(void)
{
    //get size of brick
    int n =get_size(); //note how the parenthesis is empty

    //print grid of bricks with the specified size
    print_grid(n);
}

//abstraction 1
int get_size(void)
//"int" is the output format, "get_size" the name of the function, and "void" the inputs that the function requires, in this case "void", means no inputs are required.
{
//get the value n from the user.
     int n;
     do
     {
     n = get_int("Size: ");
     }
     while (n < 1);
     return n; //hand it back as a return value into the empty parentesis from line 8
}

//abstraction 2
void print_grid(int size) //it has no output, hence why we have void at the beginning, the name of the function print_grid and finally the type and name of input inside the brackets
{
     //print the grid
     for (int i = 0; i < size; i++)
     {
         for (int j = 0; j < size; j++)
         {
             printf("#");
         }
         printf("\n");
         

}
}

