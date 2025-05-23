#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Print box edge
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
