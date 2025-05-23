#include <stdio.h>

int main()
{
    int n;
    printf("Enter height (power of 2 recommended, like 4, 8, 16): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");

        // Fractal stars using bitwise AND
        for (int j = 0; j <= i; j++)
        {
            if ((i & j) == 0)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
