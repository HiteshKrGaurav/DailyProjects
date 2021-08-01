#include <stdio.h>

int main()
{
    int hours, minutes, seconds;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds = seconds % 60;

    hours = minutes / 60;
    minutes = minutes % 60;

    printf("\nThere are:\n  H:M:S - %d:%d:%d\n\n", hours, minutes, seconds);

    return 0;
}