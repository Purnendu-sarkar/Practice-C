#include <stdio.h>

int factorial(int n)
{ // 👉 Return আছে, Parameter আছে, এবং Self-call
    if (n == 0)
        return 1;
    return n * factorial(n - 1); // 👉 Recursive call
}

int main()
{
    int fact = factorial(5);
    printf("Factorial = %d\n", fact);
    return 0;
}
