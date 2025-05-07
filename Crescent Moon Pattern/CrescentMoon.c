#include <stdio.h>

int main()
{
    int n = 10;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Outer circle
            if ((j == 0 && (i > 1 && i < n - 2)) ||
                (j == 1 && (i > 0 && i < n - 1)) ||
                (j == 2) ||
                (j == 3 && (i != 0 && i != n - 1)) ||
                (j == 4 && (i > 1 && i < n - 2)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
