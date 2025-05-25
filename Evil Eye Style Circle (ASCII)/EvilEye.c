#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 10;
    int centerX = radius, centerY = radius;

    for (int y = 0; y <= 2 * radius; y++)
    {
        for (int x = 0; x <= 2 * radius; x++)
        {
            double dist = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

            if (dist < radius - 1 && dist > radius - 3)
                printf("O"); // Outer ring (Blue)
            else if (dist < radius - 4 && dist > radius - 6)
                printf("o"); // Middle ring (White)
            else if (dist < radius - 7)
                printf("@"); // Pupil (Black or dark blue)
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
