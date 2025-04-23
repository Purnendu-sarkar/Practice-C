#include <stdio.h>

int main()
{
    int size, i, j, layer;

    printf("Enter size (odd number recommended): ");
    scanf("%d", &size);

    // Loop through rows and columns
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            // Calculate minimum distance from any edge
            layer = i < j ? i : j;
            layer = layer < size - i ? layer : size - i - 1;
            layer = layer < size - j - 1 ? layer : size - j - 1;

            // Print star for even layers, space for odd layers
            if (layer % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
