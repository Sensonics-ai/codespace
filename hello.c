//header (library), its calling for the function "printf" to exist. it's not gonna know what printf is if we dont include this particular library of C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

// the "\n" stands for "New line". so the terminal will create a NEW LINE after running the program. It makes everything clearer. it's an Escape Sequence.
// the ";" is like "." in plain languaje. we need to put it at the end of every "sentence".
//finally working !!