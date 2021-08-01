#include <stdio.h>

int main()
{
    int a;

    printf("Input an Integer: ");
    scanf("%d", &a);

    if (a >= 0)
    {
        printf("\nPositive ");
    }
    else
    {
        printf("\nNegative ");
    }

    if (a % 2 == 0)
    {
        printf("Even\n\n");
    }
    else
    {
        printf("Odd\n\n");
    }

    return 0;
}