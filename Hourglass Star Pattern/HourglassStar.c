#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Top inverted triangle
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < (2 * (n - i)) - 1; j++)
            printf("*");
        printf("\n");
    }

    // Bottom triangle
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j < (2 * i) + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
