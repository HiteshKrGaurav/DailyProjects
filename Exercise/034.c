#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    printf("Input a pair of numbers (for example 10,2):\n");

    printf("Input 1st no. of the pair: ");
    scanf("%d", &a);
    printf("Input 2nd no. of the pair: ");
    scanf("%d", &b);

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("List of odd numbers: \n");
    for (int i = b; i < a; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
