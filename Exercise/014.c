#include <stdio.h>

int main()
{
    int Km;
    float Ltr, KmLtr;

    printf("Input total distance in km: ");
    scanf("%d", &Km);
    printf("Input total fuel spent in titres: ");
    scanf("%f", &Ltr);

    KmLtr = Km / Ltr;

    printf("\nAverage consumption (km/lt): %.3f\n\n", KmLtr);

    return 0;
}