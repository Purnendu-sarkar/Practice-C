#include <stdio.h>

int main()
{
    int n = 5; // height of dome

    // Dome
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // Arch with pillars
    for (int i = 0; i < n; i++)
    {
        printf("*");
        for (int j = 0; j < n - 1; j++)
            printf(" ");
        for (int j = 0; j < 5; j++)
            printf("|");
        for (int j = 0; j < n - 1; j++)
            printf(" ");
        printf("*\n");
    }

    // Base
    for (int i = 0; i < n * 2 + 1; i++)
        printf("*");
    printf("\n");

    return 0;
}
