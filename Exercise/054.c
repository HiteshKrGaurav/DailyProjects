#include <stdio.h>

int main()
{
    float cms, inches = 2.54;

    printf("Input the distance in cm:");
    scanf("%f", &cms);

    inches = cms / inches;

    printf("\nDistance of %0.2lf cms is = %0.2lf inches\n\n", cms, inches);

    return 0;
}