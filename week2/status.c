#include <stdio.h>
#include <cs50.h>

    int main(int argc, string argv[])
    {
        if (argc  != 2)
        {
            printf("missing command-line argument\n");  //this is how you print an error message
            return 1;   //this is how you return an error code
        }
        else
        {
            printf("hello, %s\n", argv[1]);
            return 0;       //this is how you return a success code

    }