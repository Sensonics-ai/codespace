#include    <cs50.h>
#include    <stdio.h>
#include    <string.h> //for strcmp (string compare) and for being able to use == to compare strings and

int main(void)
{
    string strings[] = {"battleship", "cannon", "submarine", "airplane", "destroyer"};

    string s = get_string("String: "); //get the string from the user
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings [i], s) == 0) //if the given string is equal to the string in the array
        {
            printf("Found %s\n");

            return 0;
        }
    }
    printf("Not found\n");

    return 1;
}
