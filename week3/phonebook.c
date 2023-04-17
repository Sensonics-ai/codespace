#include <cs50.h>   //we can get intput from the user
#include <stdio.h>  //we can get output to the user
#include <string.h>  //we can compare strings

int main(void) //int main its good since we don't need command line arguments

{
    string names[] = {"Carter", "David"};   //create an array of strings "names"
    string numbers[] = {"617-555-0100", "617-555-0101"};   //create an array of "strings numbers" that relates to the names

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names [i], name) == 0)
        {
            printf("Found %s\n", numbers [i]);
            return 0;

        }
    }
    printf("Not found\n");
    return 1;

}