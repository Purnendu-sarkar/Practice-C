#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // print spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // print stars and spaces in between
        for(j = 1; j <= 2 * i - 1; j++) {
            if(j == 1 || j == 2 * i - 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
