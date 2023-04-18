#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct  //create a struct
{
    string name;    //create a string name
    string number;      //create a string number
}
person;     //call the struct person


int main(void)

{
    person people[3];   //create an array of people of size 3

    people[0].name = "Carter";  //assign the name and number to the people 0
    people[0].number = "617-555-0100";

    people[1].name = "David";           //assign the name and number to the people 1
    people[1].number = "617-555-0101";

    people[2].name = "Oriol";           //assign the name and number to the people 2
    people[2].number = "645-840466";        //this is my number

    string name = get_string("Name: ");  //prompt the user for a name
    for (int i = 0; i < 3; i++) //loop through the people array
    {
        if (strcmp(people[i].name, name) == 0)  //if the given name is equal to the name in the array
        {
            printf("Found %s\n", people[i].number);     //print the number that corresponds to the name
            return 0;

        }
    }
    printf("Not found\n");
    return 1;

}