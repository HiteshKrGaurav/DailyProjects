#include <stdio.h>

int main()
{
    int p, q, r, s;

    printf("Input the first integer : ");
    scanf("%d", &p);
    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("Input the third integer : ");
    scanf("%d", &r);
    printf("Input the fourth integer: ");
    scanf("%d", &s);

    if (p % 2 == 0)
    {
        if (q >= 0 && r >= 0 && s >= 0)
        {
            if (q > r)
            {
                if (s > p)
                {
                    if ((r + s) > (p + q))
                    {
                        printf("Correct values\n");
                    }
                    else
                    {
                        printf("Wrong values\n");
                        // printf("sum of first or second is greater than third or fourth respectively\n");
                    }
                }
                else
                {
                    printf("Wrong values\n");
                    // printf("first number is greater than fourth\n");
                }
            }
            else
            {
                printf("Wrong values\n");
                // printf("third is greater than second\n");
            }
        }
        else
        {
            printf("Wrong values\n");
            // printf("second, third, fourth are negative\n");
        }
    }

    else
    {
        printf("Wrong values\n");
        // printf("first number is odd\n");
    }

    return 0;
}