#include <stdio.h>

int main()
{
    float sum = 0;
    int limit = 2;
    printf("Input any number: ");
    scanf("%d", &limit);

    printf("\n1");

    for (int i = 2; i <= limit; i++)
    {
        printf(" + 1/%d", i);
    }
    printf("\n\n");

    // printf("%f\n", sum);

    int lcm = 1;

    for (int i = 2; i <= limit; i++)
    {
        if (lcm % i != 0)
        {
            lcm = lcm * i;
        }
    }
    // printf("LCM is %d\n\n", lcm);

    int sum1 = 0;

    for (int i = 1; i <= limit; i++)
    {
        sum1 += lcm / i;
    }

    // printf("%d\n", sum1);

    for (int i = 1; i <= sum1; i++)
    {
        if (sum1 % i == 0 && lcm % i == 0)
        {
            sum1 = sum1 / i;
            lcm = lcm / i;
        }
    }

    printf("Sum = %d/%d\n", sum1, lcm);
    printf("Sum = %.4f\n\n", (float)sum1/lcm);

    return 0;
}
