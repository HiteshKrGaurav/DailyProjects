#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf(" Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of the above two integers = %d\n", sum);
    return 0;
}
