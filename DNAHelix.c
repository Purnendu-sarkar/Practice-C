#include <stdio.h>

int main() {
    int rows = 20;

    for (int i = 0; i < rows; i++) {
        int mod = i % 6;
        switch (mod) {
            case 0:
                printf("A---T\n");
                break;
            case 1:
                printf(" A---T\n");
                break;
            case 2:
                printf("  A---T\n");
                break;
            case 3:
                printf("   T---A\n");
                break;
            case 4:
                printf("  T---A\n");
                break;
            case 5:
                printf(" T---A\n");
                break;
break;
break ;
        }
    }

    return 0;
}