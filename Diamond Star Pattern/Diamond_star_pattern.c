#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper half (pyramid)
    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (inverted pyramid)
    for(i = rows - 1; i >= 1; i--) {
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
