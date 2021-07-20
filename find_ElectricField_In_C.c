/* 

Welcome to the Electric field calculator of a Ring along X-axis

To compile this program use the following command:

    > gcc FindEInC.c -lm -o FindEInC

*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Variable And Constant
    double constk = 8987551792;
    double Q, R, x, E;

    // Taking Input of Required values
    printf("Enter Required Values\n");

    printf("Q = ");
    scanf("%lf", &Q);
    printf("R = ");
    scanf("%lf", &R);
    printf("x = ");
    scanf("%lf", &x);

    // Calculating
    E = (constk * Q * x) / (pow((pow((pow(R, 2) + pow(x, 2)), 0.5)), 3));

    // printf("E = %lf\n", E);

    // E in Scientific Notation

    int temp = 0;
    while (E > 10)
    {
        E /= 10;
        temp++;
    }

    printf("E = %.3lf x 10^%d\n", E, temp);

    char exit;
    getchar();
    printf("\nPress Enter to Exit\n");
    scanf("%c", &exit);

    return 0;
}
