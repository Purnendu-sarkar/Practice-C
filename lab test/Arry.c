#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[1000][1000];

    // Input নেওয়ার জন্য নিচের লুপ যুক্ত করা হলো
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Output দেখানোর জন্য লুপ
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
