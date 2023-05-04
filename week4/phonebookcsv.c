//saves names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    FILE *file = fopen("phonebook.csv", "a"); // open file for appending
    if (file == NULL)
    {
        return 1;
    }


    string name = get_string("Name: "); // get strings from user
    string number = get_string("Number: "); // get strings from user


    fprintf(file, "%s,%s\n", name, number); // print (write) strings to the created CSV file


    fclose(file); // close file
}