/* 

To compile this file use following command

gcc 015.c -o 015 -lm

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distace;

    printf("Input x1: ");
    scanf("%f", &x1);

    printf("Input y1: ");
    scanf("%f", &y1);

    printf("Input x2: ");
    scanf("%f", &x2);

    printf("Input y2: ");
    scanf("%f", &y2);

    distace = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("\nDistance between said points : %f\n\n", sqrt(distace));

    return 0;
}