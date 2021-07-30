#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Input the First Integer :");
    scanf("%d", &num1);

    printf("Input the Second Integer:");
    scanf("%d", &num2);

    printf("Input the Third Integer :");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\nMaximun value of three integers: %d\n\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\nMaximun value of three integers: %d\n\n", num2);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("\nMaximun value of three integers: %d\n\n", num3);
    }
    else
    {
        printf("\nAll are same!\n\n");
    }

    return 0;
}
