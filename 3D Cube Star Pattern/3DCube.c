#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the cube: ");
    scanf("%d", &n);

    // Upper face
    for (int i = 0; i < n; i++)
    {
        // Leading spaces
        for (int j = i; j < n; j++)
            printf(" ");
        // Front top edge
        for (int j = 0; j < n; j++)
            printf("*");
        // Side top edge
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Side faces
    for (int i = 0; i < n; i++)
    {
        // Left edge
        for (int j = 0; j < n; j++)
            printf("*");
        // Inner space
        for (int j = 0; j < n - 1; j++)
            printf(" ");
        // Right edge
        printf("*\n");
    }

    return 0;
}
