#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of arcs (layers): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
