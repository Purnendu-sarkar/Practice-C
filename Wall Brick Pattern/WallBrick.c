#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of bricks in a row: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        // Offset every alternate row
        if (i % 2 != 0)
            printf("  "); // 2 spaces for offset

        for (int j = 0; j < cols; j++)
        {
            printf("[] ");
        }
        printf("\n");
    }

    return 0;
}
