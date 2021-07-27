#include <stdio.h>

int main()
{
    int num1, num2, product;
    printf(" Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("Produnct of the above two integers = %d\n", product);
    return 0;
}