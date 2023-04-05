#include    <stdio.h>
#include    <cs50.h>

int main(int argc, string argv[]) //now the main function has two arguments: argc and argv
{
    if (argc == 2)  //this is how you check if the user has typed in a command line argument
    {
        printf("hello, %s\n", argv[1]); //this is how you print the command line argument
    }
    else
    {
        printf("hello, world\n");
    }
}
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}