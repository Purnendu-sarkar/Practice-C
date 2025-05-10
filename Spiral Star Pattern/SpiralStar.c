#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the pattern (odd number preferred): ");
    scanf("%d", &n);

    char spiral[n][n];

    // Initialize all cells with space
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            spiral[i][j] = ' ';

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    char star = '*';

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            spiral[top][i] = star;
        top++;

        for (int i = top; i <= bottom; i++)
            spiral[i][right] = star;
        right--;

        for (int i = right; i >= left; i--)
            spiral[bottom][i] = star;
        bottom--;

        for (int i = bottom; i >= top; i--)
            spiral[i][left] = star;
        left++;
    }

    // Print the pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c ", spiral[i][j]);
        }
        printf("\n");
    }

    return 0;
}
