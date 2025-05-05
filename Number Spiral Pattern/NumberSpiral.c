#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int spiral[n][n];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        // Top row
        for (int i = left; i <= right; i++)
            spiral[top][i] = num++;
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            spiral[i][right] = num++;
        right--;

        // Bottom row
        for (int i = right; i >= left; i--)
            spiral[bottom][i] = num++;
        bottom--;

        // Left column
        for (int i = bottom; i >= top; i--)
            spiral[i][left] = num++;
        left++;
    }

    // Print the spiral matrix
    printf("\nNumber Spiral:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", spiral[i][j]);
        }
        printf("\n");
    }

    return 0;
}
