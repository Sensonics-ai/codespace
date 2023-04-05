//the last code was a bit rigid, what if i wanted to design a code that asks the user for the scores?

//I want to create an array of 3 scores, and then calculate the average of the 3 scores
#include <stdio.h>
#include <cs50.h>
//note that we include the cs50 lib now, since we are using get_int and it is a cs50 exclusive.

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f \n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}
//this function will ask the user for scores 1, 2 and 3 and then  proceed top calculate the medium number of the 3 scores.
//Note that for it to show me decimals, i had to call the %float, and put the (float) before the divide