#include    <cs50.h>
#include    <stdio.h>
#include    <string.h> //for strlen and for being able to use == to compare strings

int main(void)
{
    string strings[] = {"battleship", "cannon", "submarine", "airplane", "destroyer"};

    string s = get_string("String: "); //get the string from the user
    for (int i = 0; i < 5; i++)
    {
        if (strings[i] == s) //if the string is equal to the string in the array
        {
            printf("Found %s\n");

            return 0;
        }
    }
    printf("Not found\n");

    return 1;
}
