#include <stdio.h>

int main()
{
    int i, j, rows;
    char ch = 'A';

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        ch = 'A'; // প্রতিবার লাইনের শুরুতে A থেকে শুরু
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
