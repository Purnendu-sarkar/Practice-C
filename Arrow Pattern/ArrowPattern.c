// ⛳Arrow Star Pattern
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the arrow head: ");
    scanf("%d", &n);

    // Arrow head (triangle)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Arrow shaft (stick)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("  "); // space before the stick
        }
        printf("*\n");
    }

    return 0;
}
