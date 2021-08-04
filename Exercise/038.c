#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Input two numbers:\n");

    printf("x:");
    scanf("%f", &x);
    printf("y:");
    scanf("%f", &y);

    z = x / y;
    if (z > 0 || z <= 0)
    {
        printf("\nOutput: %.2f\n\n", z);
    }
    else
    {
        printf("\nError!\n\n");
    }

    return 0;
}