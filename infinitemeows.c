#include <stdbool.h>
#include <stdio.h>

while(true)
//this just basiscally translates to do something forever in C. Alternatively you could write "while (1)". but in order ti include the boolean "true" you need to have included the
//library that contains it, in this case stdbool.h. (cs50.h also includes it)
{
      printf("meow\n");
}

//if you were to send this to the terminal, it would create an Infinite Loop, you will lose control of your terminal, in this case you will get infinite meows.
//In order to cancel such loops, you can press "Ctrl + c", that will stop any infinite loop you may have created.