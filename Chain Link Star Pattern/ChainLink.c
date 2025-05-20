#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of chain links (suggested: 4+): ");
    scanf("%d", &n);

    for (int row = 0; row < 2 * n; row++)
    {
        for (int col = 0; col < 4 * n; col++)
        {
            int in_link = ((row / 2) + (col / 4)) % 2 == 0;

            if (
                (row % 2 == 0 && (col % 4 == 0 || col % 4 == 3)) || // vertical edges
                (row % 2 == 1 && (col % 4 == 1 || col % 4 == 2))    // horizontal edges
            )
            {
                printf(in_link ? "*" : " ");
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
