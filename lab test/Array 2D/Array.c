#include <stdio.h>

int main()
{
    int r, c;

    // User থেকে row এবং column ইনপুট নেওয়া
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[100][100];

    // Matrix elements ইনপুট নেওয়া
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Matrix আকারে output দেখানো
    printf("The matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
