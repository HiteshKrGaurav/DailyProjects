#include <stdio.h>

int main()
{
    int index = 200, a = 0;

    // printf("\nPrime numbers b/w 1 to ");
    // scanf("%d", &index);
    printf("\n");
    printf("The prime numbers between 1 and 199 are:\n\n");

    for (int i = 2; i < index; i++)
    {

        int flag = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            printf("%d ", i);
            a++;

            if (a % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n\n");

    return 0;
}