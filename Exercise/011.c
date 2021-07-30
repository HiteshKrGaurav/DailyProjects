#include <stdio.h>

int main()
{
    float item1, item2;
    float weight1, weight2;

    printf("Item 1:-\n");
    printf("     weight :");
    scanf("%f", &weight1);
    printf("No. of item :");
    scanf("%f", &item1);

    printf("\n");

    printf("Item 2:-\n");
    printf("     weight :");
    scanf("%f", &weight2);
    printf("No. of item :");
    scanf("%f", &item2);

    float Average_Value = ((item1 * weight1) + (item2 * weight2)) / (item1 + item2);

    printf("Average Value = %f\n", Average_Value);

    return 0;
}