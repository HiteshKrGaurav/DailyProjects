#include <stdio.h>

int main()
{
    float a, b, c, peri;

    printf("Input the 1st number: ");
    scanf("%f", &a);
    printf("Input the 2nd number: ");
    scanf("%f", &b);
    printf("Input the 3rd number: ");
    scanf("%f", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        peri = a + b + c;
        printf("\nPerimeter = %.2f\n\n", peri);
    }
    else
    {
        printf("\nTriangle cannot be possible with given number.\n\n");
    }

    return 0;
}

/* 

(a+b>c)&&(a>b+c)&&(a+c>b)

*/
