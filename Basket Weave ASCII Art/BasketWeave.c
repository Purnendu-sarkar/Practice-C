#include <stdio.h>

int main()
{
    int rows = 10, cols = 20;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Checker style weaving: alternate patterns
            if ((i / 2 + j / 4) % 2 == 0)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
