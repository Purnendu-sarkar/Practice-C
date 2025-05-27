#include <stdio.h>

int main()
{
    int width = 21;

    // Parachute top (semi-circle)
    for (int i = 0; i < width / 2; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j >= (width / 2 - i) && j <= (width / 2 + i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Parachute strings
    int lines = 4;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == width / 2 - i || j == width / 2 + i || j == width / 2)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Basket
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j >= width / 2 - 2 && j <= width / 2 + 2)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
