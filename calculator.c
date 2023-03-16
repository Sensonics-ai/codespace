#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long x = get_long("x: ");
   long y = get_long("y: ");

   printf("%li\n", x + y);

//we need to change the printf function in order to recognize the new data type. There're many different ones; %c, %f, %i (integer), %li (long integer), %s (string).

}