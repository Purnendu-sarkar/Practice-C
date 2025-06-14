#include <stdio.h>

int main()
{
    // Top battlements
    printf("|| || || || ||\n");
    printf("==============\n");

    // Tower walls with windows
    for (int i = 0; i < 6; i++)
    {
        if (i == 2 || i == 3)
        {
            printf("||    []     ||\n");
        }
        else
        {
            printf("||           ||\n");
        }
    }

    // Door section
    printf("||    __     ||\n");
    printf("||   |__|    ||\n");

    // Base of tower
    printf("==============\n");

    return 0;
}
