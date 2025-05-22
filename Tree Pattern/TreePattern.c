#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the tree: ");
    scanf("%d", &n);

    // Tree leaves
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Tree trunk (1 or 2 lines depending on height)
    int trunk_height = n / 3;
    if (trunk_height < 1)
        trunk_height = 1;
    int trunk_width = n % 2 == 0 ? 2 : 1;
    int trunk_space = n - trunk_width / 2 - 1;

    for (int i = 0; i < trunk_height; i++)
    {
        for (int j = 0; j < trunk_space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < trunk_width; j++)
        {
            printf("|");
        }

        printf("\n");
    }

    return 0;
}
