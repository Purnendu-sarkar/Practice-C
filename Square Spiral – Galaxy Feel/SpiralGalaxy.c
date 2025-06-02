#include <stdio.h>

#define SIZE 15

int main()
{
    char matrix[SIZE][SIZE];
    int top = 0, bottom = SIZE - 1;
    int left = 0, right = SIZE - 1;
    char fill = '*';

    // Initialize matrix with space
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            matrix[i][j] = ' ';

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            matrix[top][i] = fill;
        top++;

        for (int i = top; i <= bottom; i++)
            matrix[i][right] = fill;
        right--;

        for (int i = right; i >= left; i--)
            matrix[bottom][i] = fill;
        bottom--;

        for (int i = bottom; i >= top; i--)
            matrix[i][left] = fill;
        left++;
    }

    // Print the matrix
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
