#include <stdio.h>

int main()
{
    int width = 21;

    // Top Dome
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j >= width / 2 - i && j <= width / 2 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // UFO Disc Body
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1)
                printf("*");
            else
                printf("=");
        }
        printf("\n");
    }

    // Beam lights
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < width; j++)
        {
            
            if (j == width / 2 - i || j == width / 2 + i)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
