if (x < y)
//diferently from functions, after the word if, we leave a space between the "if" and the first "("
//we are assuming that X and Y already exist
{
    printf("x is less than y\n");
}
//"{}" are just hugging the lines of code. Its like the orange bracers that we had in Scratch. Strictly speaking, if you only have a single line of code, we don't need them, but it's good practice to get used to them nontheless.
else if (x > y)
{
    printf("x is not less than y\n")
}
else if (x == y)
// in C, similarly to what happens with % (%%) we need to write double = when wanting to say something is equal to something else, because a single "=" means "assignment"
// alternatively we could just write "else" here since there's only one other final result after <,> (which is the "=" case)
{
    printf("x is equal to y\n")
}