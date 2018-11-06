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

    for (int line = 0; line < height; line++)
    {
        // Add needed spaces
        for (int space = height - line; space > 1; space--)
        {
            printf(" ");
        }
        // Add needed steps
        for (int hash = 0; hash < line + 2; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}