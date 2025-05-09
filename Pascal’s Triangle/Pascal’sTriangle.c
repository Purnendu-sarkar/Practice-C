#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        // Print spaces for formatting
        for (j = 0; j < rows - i - 1; j++)
            printf("  ");

        // Print values
        for (j = 0; j <= i; j++)
        {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
