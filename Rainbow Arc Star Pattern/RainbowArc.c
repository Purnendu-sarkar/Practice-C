#include <stdio.h>

int main()
{
    int n;
    char colors[] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'}; // Rainbow colors

    printf("Enter number of arcs (up to 7): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // color character print
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("%c", colors[i]);
        }

        printf("\n");
    }

    return 0;
}
