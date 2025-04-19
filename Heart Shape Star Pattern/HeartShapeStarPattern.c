#include <stdio.h>

int main()
{
    int i, j;

    int rows = 6; // Number of rows for the heart shape

    // Upper two semi-circles
    for (i = rows / 2; i <= rows; i += 2)
    {
        // Left spaces
        for (j = 1; j < rows - i; j += 2)
        {
            printf(" ");
        }

        // Left stars
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Middle spaces
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Right stars
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower triangle
    for (i = rows; i >= 1; i--)
    {
        // Left spaces
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        // Stars
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
