#include <stdio.h>

int main()
{
    float S = 0;

    for (int i = 1; i < 51; i++)
    {
        S += (float)1 / i;
    }

    printf("\nValue of S: %.2f\n\n", S);

    return 0;
}