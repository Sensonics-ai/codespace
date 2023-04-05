#include <stdio.h>
#include <cs50.h>

float average(int array[]);
//this is the function prototype, it tells the compiler that there is a function called average, that takes an array of integers as an argument, and returns a float

int N = 3;  //this is a global variable, it is declared outside of the main function, and can be used anywhere in the program
int main(void)
{
    int scores[N];  //this is a local variable, it is declared inside the main function, and can only be used inside the main function
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f \n", average(scores));   //this is how you call a function, you pass the arguments in the same order as they are declared in the function prototype
}

float average(int array[])  //this is the function definition, it is the actual code that is executed when the function is called
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];    //this is the same as sum = sum + array[i]
    }
    return sum / (float) N; //this is how you return a value from a function
}