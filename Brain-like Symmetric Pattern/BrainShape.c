#include <stdio.h>

int main()
{
    int rows = 10;

    for (int i = 0; i < rows; i++)
    {
        // Left lobe curve
        for (int j = 0; j < rows - i; j++)
            printf(" ");
        printf("/");

        for (int j = 0; j < i * 2; j++)
            printf("~");

        printf("\\");

        // Space in the middle
        printf("  ");

        // Right lobe curve
        printf("/");
        for (int j = 0; j < i * 2; j++)
            printf("~");
        printf("\\\n");
    }

    // Bottom closure
    for (int i = 0; i < rows * 2 + 4; i++)
        printf("-");
    printf("\n");

    return 0;
}
