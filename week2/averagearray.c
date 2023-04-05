#include <stdio.h>
#include <cs50.h>

float average(int array[]);
//this is the function prototype, it tells the compiler that there is a function called average, that takes an array of integers as an argument, and returns a float
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f \n", average(scores, 3));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}