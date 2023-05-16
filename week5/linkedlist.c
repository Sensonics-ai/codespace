#include <stdio.h>  // for printf
#include <stdlib.h> // for malloc

typedef struct node     // define a new type called node

{
    int number;     // each node contains an int
    struct node *next;  // each node contains a pointer to the next node

}
node;               // node is a type of structure

int main(int argc, char *argv[])    // main function with command line arguments
{
    node *list = NULL;  // initialize list to NULL

    for (int i = 1; i < argc; i++)  // iterate through command line arguments
    {
        int number = atoi(argv[i]); // convert string to int

        node *n = malloc(sizeof(node)); // allocate memory for a node
        if (n == NULL)  // if malloc fails ....
        {
            return 1;   // .... return 1
        }
        n->number = number; // set the number field of the node to the number

        n->next = NULL; // set the next field of the node to NULL

        n->next = list; // set the next field of the node to the list
        list = n;       // now we can set the list to the node
    }

    node *ptr = list;   // pointer is pointing to the list
    while (ptr != NULL) // while the pointer is not pointing to NULL...
    {
        printf("%i\n", ptr->number);    //.... print the number field of the node
        ptr = ptr->next;    // and set the pointer to the next field of the node
    }

    ptr = list; // set the pointer to the list again
    while (ptr != NULL) // while the pointer is not pointing to NULL...
    {
        node *next = ptr->next; // set the next field of the node to the next node
        free(ptr);  // free the memory allocated for the node
        ptr = next; // set the pointer to the next node
    }
}