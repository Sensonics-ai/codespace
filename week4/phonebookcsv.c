//saves names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // open file
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    // get strings from user
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    // print (write) strings to the created CSV file
    fprintf(file, "%s,%s\n", name, number);

    // close file
    fclose(file);
}