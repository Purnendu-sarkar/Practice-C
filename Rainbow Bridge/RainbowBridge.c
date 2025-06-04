#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 15;

    for (int i = 0; i <= radius; i++)
    {
        for (int j = -2 * radius; j <= 2 * radius; j++)
        {
            float d = sqrt(i * i + (j / 2.0) * (j / 2.0));
            if (d > radius - 1 && d < radius)
                printf("R"); // Red
            else if (d > radius - 3 && d < radius - 2)
                printf("O"); // Orange
            else if (d > radius - 5 && d < radius - 4)
                printf("Y"); // Yellow
            else if (d > radius - 7 && d < radius - 6)
                printf("G"); // Green
            else if (d > radius - 9 && d < radius - 8)
                printf("B"); // Blue
            else if (d > radius - 11 && d < radius - 10)
                printf("I"); // Indigo
            else if (d > radius - 13 && d < radius - 12)
                printf("V"); // Violet
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
