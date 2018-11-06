#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare variable up top
    int height;

    // Ask for correct number
    do
    {
        height = get_int("Height:");
    }
    while (height < 0 || height > 23);

    for (int line = 1; line <= height; line++)
    {
        // Add needed spaces
        for (int space = height - line; space > 0; space--)
        {
            printf(" ");
        }
        // Add needed steps
        for (int hash = 0; hash < line; hash++)
        {
            printf("#");
        }
        printf("  ");
        // Add new steps on the other side
        for (int hash = 0; hash < line; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}