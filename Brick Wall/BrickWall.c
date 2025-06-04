#include <stdio.h>

int main()
{
    int rows = 10;
    int bricks_in_row = 8;
    int brick_width = 4;

    for (int i = 0; i < rows; i++)
    {
        // Offset for staggered effect
        if (i % 2 != 0)
            printf("  ");

        for (int j = 0; j < bricks_in_row; j++)
        {
            for (int k = 0; k < brick_width; k++)
                printf("#");
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
