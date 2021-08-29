/* 

To compile this file use following command

gcc 061.c -lm -o 061 && ./061

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float theta, theta1;
    printf("\nEnter the value of theta: ");
    scanf("%f", &theta);

    theta1 = (float)1 / theta;

    float sinvalue = sin(theta);

    printf("\nvalue of sin(1/%f) = sin(%f) = %f\n\n", theta, theta1, sinvalue);

    return 0;
}