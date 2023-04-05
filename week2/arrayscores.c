#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average: %f \n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}
//this function will calculate the medium number of the 3 scores. Note that for it to show me decimals, i had to call the %float, and put the (float) before the divide