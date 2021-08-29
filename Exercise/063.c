#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("\nInput a positive number less than 100: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i * i * i * i;
    }

    printf("\nSum of the series is %d\n\n", sum);

    return 0;
}