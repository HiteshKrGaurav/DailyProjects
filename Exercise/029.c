#include <stdio.h>

int main()
{
    int num[5], sum = 0;
    char numname[][5] = {"1st", "2nd", "3rd", "4th", "5th"};

    for (int i = 0; i < 5; i++)
    {
        printf("Input the %s number: ", numname[i]);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if ((num[i] % 2 == 1))
        {
            sum = sum + num[i];
        }
    }

    printf("\nSum of all odd values: %d\n\n", sum);

    return 0;
}