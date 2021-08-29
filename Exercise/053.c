#include <stdio.h>

int main()
{
    int p, r, t, I;

    printf("Input principle, Rate of interest & time to find simple interest:\n");
    scanf("%d %d %d", &p, &r, &t);

    I = (p * r * t) / 100;

    printf("\nSimple Interest: %d\n", I);
    printf("Amount: %d\n\n", I + p);

    return 0;
}