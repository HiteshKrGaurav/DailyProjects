#include <stdio.h>

int main()
{
    int divisor, dividend;

    printf("Input an Integer: ");
    scanf("%d", &dividend);

    printf("\n");
    printf("All the divisor of %d are:\n", dividend);

    for (int i = 1; i <= dividend; i++)
    {
        if (dividend % i == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");

    return 0;
}