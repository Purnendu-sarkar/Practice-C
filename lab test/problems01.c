// #include <stdio.h>

// int main()
// {
//     for(int i=1; i <=100; i++) {
//         printf("%d ", i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Limit : " );
    scanf("%d",&n);

    for(int i=1; i <=n; i++) {
        printf("%d ", i);
    }
    return 0;
}