#include <stdio.h>

int main()
{
    int p = 0, n = 0;
    float num[5];
    char numname[][5] = {"1st", "2nd", "3rd", "4th", "5th"};

    for (int i = 0; i < 5; i++)
    {
        printf("Input the %s number: ", numname[i]);
        scanf("%f", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (num[i] >= 0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", p);
    printf("Number of negative numbers: %d\n\n", n);

    return 0;
}