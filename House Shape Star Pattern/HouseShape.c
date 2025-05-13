#include <stdio.h>

int main()
{
    int n;
    printf("Enter height of the house (roof height): ");
    scanf("%d", &n);

    int width = 2 * n - 1;

    // Roof (Triangle)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    // Walls (Rectangle)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (j == 1 || j == width)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
