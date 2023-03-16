#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long x = get_long("x: ");
   long y = get_long("y: ");

   float z = (float) x /(float) y;
   //we need to transform the long x and y into floating points in between long numbers. Otherwise it won't work, since the program still will treat x and y as Long.
   printf("%f\n", z);

}