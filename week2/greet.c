#include    <stdio.h>
#include    <cs50.h>

int main(int argc, string argv[]) //now the main function has two arguments: argc and argv
{
    if (argc == 2)  //this is how you check how much the user has typed in a command line argument, in this case 2, the name of the program (argc) and the argument (argv).
        printf("hello, %s\n", argv[1]); //this is how you print the command line argument
    }
    else
    {
        printf("hello, world\n");
    }
}
