#include <stdio.h>

int main()
{
    int size = 9;
    for (int i = -size; i <= size; i++)
    {
        for (int j = -size; j <= size; j++)
        {
            if (i == 0 && j == 0)
                printf("✦"); // Center sparkle
            else if (i == 0 || j == 0 || i == j || i == -j)
                printf("*"); // Lines shooting out
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
