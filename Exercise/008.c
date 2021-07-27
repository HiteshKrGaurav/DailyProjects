#include <stdio.h>

int main()
{
    int YearDays = 365, WeekDays = 7;
    int Years, Weeks, Days;
    int InputDays;

    printf("Numaber of Days :");
    scanf("%d", &Days);

    Years = (Days / YearDays);
    Days = (Days % YearDays);

    Weeks = (Days / WeekDays);
    Days = (Days % WeekDays);

    printf("Years: %d \n", Years);
    printf("Weeks: %d \n", Weeks);
    printf("Days : %d \n", Days);

    return 0;
}