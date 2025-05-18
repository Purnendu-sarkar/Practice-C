#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    printf("Enter number of lines (multiple of 6 recommended): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int pos1 = abs(3 - i % 6);
        int pos2 = 6 - pos1;

        for (int j = 0; j <= 6; j++) {
            if (j == pos1 || j == pos2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
