#include <stdio.h>

int counter = 3;
while (counter > 0)

{
    printf("meow\n");
    counter = counter -1;
}

//We can also write the same thing differently, for the sake of simplicity;

int i = 3
while (i > 0)
{
    printf("meow\n");
    i = i -1;
}

//since "i" its just a shorcut for "integer"
//we can double up and make it even more simpler, taking into account the notes form meow.c

int i = 3
while (i > 0)
{
    printf("meow\n");
    i--;
}