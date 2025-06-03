#include <stdio.h>
#include <math.h>

int main()
{
    int r = 10; // radius of the crystal ball

    for (int i = -r; i <= r; i++)
    {
        for (int j = -2 * r; j <= 2 * r; j++)
        {
            float d = sqrt(i * i + (j / 2.0) * (j / 2.0));
            if (d > r - 0.5 && d < r + 0.5)
                printf("*"); // boundary
            else if (d < r - 0.5)
                printf("."); // glass-like inside
            else
                printf(" ");
        }
        printf("\n");
    }

    // Stand of the ball
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 * r; j++)
            printf(" ");
        printf("||| ||| |||\n");
    }

    return 0;
}
