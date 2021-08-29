#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x :");
    scanf("%d", &x);
    printf("Enter the value of y :");
    scanf("%d", &y);

    printf("\nBefore swapping the value of x & y: %d %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping the value of x & y: %d %d\n\n", x, y);

    return 0;
}