#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the number of rows (odd number recommended): ");
    scanf("%d", &n);

    // Upper inverted triangle
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        //ug
            printf(" ");
        for (j = 0; j < n - 2 * i; j++)
            printf("*");
        if (n - 2 * i <= 0)
            break;
        printf("\n");
    }

    // Lower normal triangle
    int half = n / 2;
    for (i = half - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < n - 2 * i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
