#include <cs50.h>
//get int function
#include <stdio.h>
//get printf function

int main(void)
//In C programming language, "int main(void)" is the declaration of the main function, which is the entry point of a C program.
//Here, "int" specifies the return type of the function, which is an integer value that indicates the success or failure of the program execution. The integer value 0 indicates successful program execution, while a non-zero value indicates some error condition.
//The "void" keyword inside the parentheses indicates that the main function doesn't take any parameters. In other words, it is a function that takes no arguments.
//Therefore, "int main(void)" is a declaration that specifies the return type and argument list of the main function.

{
   int x = get_int("what's x?\n");
   int y = get_int("what's y?\n");

   if (x < y)
   {
    printf("x is less than y\n");
    }
    else if (x > y)
    {
    printf("y is less than x\n");
    }
    else if (x == y)
    {
    printf("x is equal to y\n");
    }
//we put the "{}" in new lines for clarity.
}