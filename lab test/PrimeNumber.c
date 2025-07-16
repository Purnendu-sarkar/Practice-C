// #include <stdio.h>

// int main() {
//     int n, isPrime = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n <= 1) {
//         isPrime = 0; // 1 বা তার নিচের সংখ্যা প্রাইম নয়
//     } else {
//         for (int i = 2; i <= n / 2; i++) {
//             if (n % i == 0) {
//                 isPrime = 0; // ভাগ গেলে প্রাইম না
//                 break;
//             }
//         }
//     }

//     if (isPrime)
//         printf("%d is a Prime number.\n", n);
//     else
//         printf("%d is NOT a Prime number.\n", n);

//     return 0;
// }
#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Enter which prime number you want (n-th): ");
    scanf("%d", &n);

    while (1) {
        int isPrime = 1;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
            if (count == n) {
                printf("The %d-th prime number is: %d\n", n, num);
                break;
            }
        }

        num++;

//printf("%d is NOT a Prime number.\n", n);
    }

    return 0;
}
