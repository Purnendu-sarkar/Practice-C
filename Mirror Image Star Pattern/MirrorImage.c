#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Main pattern
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Spaces between main and mirror
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            printf(" ");
        }

        // Mirror pattern
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
