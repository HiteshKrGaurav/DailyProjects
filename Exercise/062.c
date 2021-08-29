#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("\nInput a positive number less than 500: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("\nSum of the digits of %d is %d\n\n", num, sum);

    return 0;
}