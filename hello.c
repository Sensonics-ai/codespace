#include <stdio.h>
//header files (library), its calling for the function "printf" to exist. it's not gonna know what printf is if we dont import/include this particular library of C. it's like adding the voice lines library in Scratch.
#include <cs50.h>


int main(void)
{
    string answer = get_string("what's your name? ");
    printf("hello, answer\n");
}
// the "\n" stands for "New line". so the terminal will create a NEW LINE after running the program. It makes everything clearer. it's an Escape Sequence.
// the ";" is like "." in plain languaje. we need to put it at the end of every "sentence".
//finally working !!