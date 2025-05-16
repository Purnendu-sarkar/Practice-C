#include <stdio.h>

int main()
{
    int n, num = 1;
    printf("Enter the number of steps in the ladder: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // প্রতিটি ধাপে i সংখ্যক সংখ্যা
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
