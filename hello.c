#include <stdio.h>
//header files (library), its calling for the function "printf" to exist. it's not gonna know what printf is if we dont import/include this particular library of C. it's like adding the voice lines library in Scratch.
#include <cs50.h>


int main(void)
{
    string first = get_string("what's your first name? ");
    string last = get_string("what's your last name? ");
    printf("hello, %s %s\n", first, last);
    //each %s just basically calls and individual variable. you need as much as variables you are gonna have.
    //note that "string" basically is telling the program that I want to get a "line of text" out of this. First and Last are just Wwhat Im telling the program that is going to be my answers (first = my first name, last= my last name)
}
// the "\n" stands for "New line". so the terminal will create a NEW LINE after running the program. It makes everything clearer. it's an Escape Sequence.
// the ";" is like "." in plain languaje. we need to put it at the end of every "sentence".
//finally working !!