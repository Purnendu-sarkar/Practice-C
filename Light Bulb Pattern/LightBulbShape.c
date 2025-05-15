#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the bulb head (suggested: 5 to 7): ");
    scanf("%d", &n);

    int width = 2 * n - 1;

    // Bulb Head (Circle-like)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    // Neck of the bulb
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
            printf(" ");
        printf("*****\n");
    }

    // Bulb base
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf(" ");
        printf("***\n");
    }

    return 0;
}
