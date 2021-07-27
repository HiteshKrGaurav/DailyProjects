#include <stdio.h>

#define PI 3.14

int main()
{
    float r, A, C;
    char unit[7] = "inches";

    printf("Enter Radius of a Circle :");
    scanf("%f", &r);

    A = PI * r * r;
    C = 2 * PI * r;

    printf("Perimeter of the Circle = %f %s\n", C, unit);
    printf("Area of the Circle = %f %s\n", A, unit);

    return 0;
}