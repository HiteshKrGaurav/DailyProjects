/* 

To compile this file use the following command unless you will find error

gcc 020.c -o 020 -lm

*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, r1, r2;

    printf("Input the first number(a):");
    scanf("%lf", &a);
    printf("Input the second number(b):");
    scanf("%lf", &b);
    printf("Input the third number(c):");
    scanf("%lf", &c);

    D = (b * b) - (4 * a * c);

    if (D >= 0 && a != 0)
    {

        D = sqrt(D);

        r1 = (-b + D) / (2 * a);
        r2 = (-b - D) / (2 * a);

        printf("\nRoot1 = %lf\n\n", r1);
        printf("\nRoot2 = %lf\n\n", r2);
    }
    else
    {
        printf("\nImpossible to find the roots.\n");
        if (D < 0)
        {
            printf("The roots will be not real since\n");
        }
        printf("D = %lf\n\n", D);
    }

    return 0;
}