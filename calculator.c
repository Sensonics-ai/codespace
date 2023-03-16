#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long x = get_long("x: ");
   long y = get_long("y: ");

   float z = (float) x /(float) y;
   //we need to transform the long x and y into floating points in between long numbers. Otherwise it won't work, since the program still will treat x and y as Long.
   printf("%.8f\n", z);
   //we can define the amount of decimals we want to see if we add the %.xf in the printf function, where x is the desired amount of decimals.
}