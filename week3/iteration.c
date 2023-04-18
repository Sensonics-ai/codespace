#include    <cs50.h>
#include    <stdio.h>

void draw(int n);

int main (void)
{
    int height = get_int("Height: ");
    draw(height);

}

void draw(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}