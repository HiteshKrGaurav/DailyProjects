#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, sum;

    printf("Input the 1st number: ");
    scanf("%d", &num1);
    printf("Input the 2nd number: ");
    scanf("%d", &num2);
    printf("Input the 3rd number: ");
    scanf("%d", &num3);
    printf("Input the 4th number: ");
    scanf("%d", &num4);
    printf("Input the 5th number: ");
    scanf("%d", &num5);

    if (num1 % 2 == 0)
    {
        num1 = 0;
    }
    if (num2 % 2 == 0)
    {
        num2 = 0;
    }
    if (num3 % 2 == 0)
    {
        num3 = 0;
    }
    if (num4 % 2 == 0)
    {
        num4 = 0;
    }
    if (num5 % 2 == 0)
    {
        num5 = 0;
    }

    sum = (num1 + num2 + num3 + num4 + num5);

    printf("\nSum of all odd values: %d\n\n", sum);

    return 0;
}