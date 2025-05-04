#include <stdio.h>

int main()
{
    int layers, i, j, k;

    printf("Enter number of layers: ");
    scanf("%d", &layers);

    int width = 2 * layers + 3;

    for (i = 1; i <= layers; i++)
    {
        int stars = width - (2 * (layers - i));
        int spaces = (width - stars) / 2;

        for (j = 1; j <= 3; j++)
        { // Each layer has 3 rows
            for (k = 0; k < spaces; k++)
                printf(" ");
            for (k = 0; k < stars; k++)
                printf("*");
            printf("\n");
        }
    }

    // Cake base (plate)
    for (i = 0; i < width + 4; i++)
    {
        printf("=");
    }

    printf("\n");
    return 0;
}
