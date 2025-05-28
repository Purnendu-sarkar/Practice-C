#include <stdio.h>

int main()
{
    int n = 5; // number of petal layers

    // Upper petals
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j <= i * 2; j++)
            printf("*");
        printf("\n");
    }

    // Middle round
    for (int i = 0; i < n - 1; i++)
    {
        printf(" ");
        for (int j = 0; j < n * 2 - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower petals (mirrored)
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j <= i * 2; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
