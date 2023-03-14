#include <stdio.h>

int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");

//you can highlight the lines clicking on line number and with "ctrl + Shift + L" you click the rest.
//lets say you wanted to change one of those meows for a woof. how could you do that? easy, varibales:

int counter = 0;

//if you want to increment by 1;
counter = counter + 1;

// that just assigning counter current value + 1 to create the new counter value.
//Note that you dont need to add "Int" because counter already exists. You only need "int" the first time you create something.
//Alternatively you can write the line 15 differently;

counter += 1;

//or even, if you know you are just gonna be adding "1";
counter++;
//also, substracting 1;
counter--;


}