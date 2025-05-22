#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows (A to ...): ");
    scanf("%d", &n);

    // Upper part
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // characters
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ch++);
        }
        ch -= 2;
        for (int j = 0; j < i; j++)
        {
            printf("%c", ch--);
        }

        printf("\n");
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // characters
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ch++);
        }
        ch -= 2;
        for (int j = 0; j < i; j++)
        {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
