#include <stdio.h>
#include <math.h>

#define SIZE 21 // must be odd for center point

int main()
{
    int center = SIZE / 2;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int dx = j - center;
            int dy = i - center;
            float distance = sqrt(dx * dx + dy * dy);

            // Draw concentric circles (web rings)
            if ((int)distance % 3 == 0 && distance < center)
                printf("*");
            // Draw radial lines (from center outwards)
            else if (dx == 0 || dy == 0 || dx == dy || dx == -dy)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
