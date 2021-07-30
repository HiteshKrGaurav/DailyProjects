#include <stdio.h>

int main()
{
    int WrkHrs, SpH, Salary;
    char EID[11];

    printf("Enter Required Details\n");
    printf("Employee ID(max 10 characher) :");
    scanf("%s", &EID);

    printf("Working Hrs :");
    scanf("%d", &WrkHrs);

    printf("Salary per Hrs :");
    scanf("%d", &SpH);

    Salary = (WrkHrs * SpH);

    printf("\nYour Salary is US$%d\n", Salary);

    return 0;
}
