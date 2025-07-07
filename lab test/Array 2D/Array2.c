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
    printf("\nThe matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // ✅ 1. যোগফল বের করা
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nSum of all elements: %d\n", sum);

    // ✅ 2. ট্রান্সপোজ (Transpose)
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; i++) // column now becomes row
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    // ✅ 3. সর্বোচ্চ উপাদান (Maximum element)
    int max = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\nMaximum element in the matrix: %d\n", max);

    // ✅ 4. ম্যাট্রিক্স গুণফল (Only if square matrix)
    if (r == c)
    {
        int result[100][100];

        // গুণফল শুরু
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < c; k++)
                {
                    result[i][j] += a[i][k] * a[k][j];
                }
            }
        }

        // গুণফল দেখানো
        printf("\nMatrix multiplied by itself (A * A):\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix multiplication with itself is not possible (not a square matrix).\n");
    }

    return 0;
}
