#include <stdio.h>

int main()
{
    int size = 6;

    // Top Face
    for (int i = 0; i < size; i++)
    {
        for (int s = 0; s < size - i; s++)
            printf(" ");
        printf("/");
        for (int j = 0; j < size; j++)
            printf("~");
        printf("/|\n");
    }

    // Front Face
    for (int i = 0; i < size; i++)
    {
        printf("|");
        for (int j = 0; j < size; j++)
            printf(" ");
        printf("|");
        for (int j = 0; j < i; j++)
            printf(" ");
        printf("|\n");
    }

    // Bottom Edge
    printf("|");
    for (int j = 0; j < size; j++)
        printf("_");
    printf("|");
    for (int j = 0; j < size - 1; j++)
        printf("_");
    printf("|\n");

    return 0;
}
