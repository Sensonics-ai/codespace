#include <cs50.h>
#include <stdio.h>

//lets setup a linear search

int main(void)
{

    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
//we have 7 numbers in the array, so we need to put 7 in the for loop
    int n = get_int("Number: ");     //get the number from the user
    for (int i = 0; i < 7; i++)
    {
        if (n == numbers[i])    //if the number is equal to the number in the array
        {
            printf("Found\n");
            return 0;

        }
    }
    printf("Not found\n");  
    return 1;
}