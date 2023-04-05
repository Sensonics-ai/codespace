//I want to create an array of 3 scores, and then calculate the average of the 3 scores
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];
    scores[0] = get_int("Score 1: ");
    scores[1] = get_int("Score 2: ");
    scores[2] = get_int("Score 3: ");

    printf("Average: %f \n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}
//this function will calculate the medium number of the 3 scores. Note that for it to show me decimals, i had to call the %float, and put the (float) before the divide