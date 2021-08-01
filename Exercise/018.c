#include <stdio.h>

int main()
{
    int days, months, years;

    printf("Input no. of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    printf(
        "%d Year(s)\n%d Month(s)\n%d Day(s)\n\n", years, months, days);

    return 0;
}