#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // Zigzag logic
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
