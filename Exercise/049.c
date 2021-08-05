#include <stdio.h>

int main()
{
    int num[5];
    printf("Input the first number of the array: ");
    scanf("%d", &num[0]);

    for (int i = 1; i < 5; i++)
    {
        num[i] = num[i - 1] * 3;
    }

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("n[%d] = %d\n", i, num[i]);
    }
    printf("\n");

    return 0;
}