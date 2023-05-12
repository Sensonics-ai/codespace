#include   <stdio.h>    // printf
#include   <stdlib.h>   // malloc

int main(void)
{
    int *list = malloc(3 * sizeof(int)); // allocate memory for 3 integers, hence list is now a pointer to an integer
    if (list == NULL) // if malloc returns NULL, exit
    {
        return 1;   // return 1 to indicate an error
    }

    list[0] = 1; // store 1 in the first integer
    list[1] = 2; // store 2 in the second integer
    list[2] = 3; // store 3 in the third integer

    int *tmp = malloc(4 * sizeof(int)); // allocate memory for 4 integers temporarily
    if (tmp == NULL) // if malloc returns NULL, exit
    {
        free(list); // free the memory allocated for list
        return 1;   // return 1 to indicate an error
    }
    for (int i = 0; i < 3; i++) // iterate over the array
    {
        tmp[i] = list[i]; // copy each integer from list to tmp
    }
    tmp[3] = 4; // store 4 in the fourth integer

    free(list); // free the memory allocated for list

    list = tmp; // set list to point to the same memory as tmp

    for (int i = 0; i < 3; i++) // iterate over the array
    {
        printf("%i\n", list[i]); // print each integer
    }


}