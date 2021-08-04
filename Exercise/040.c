#include <stdio.h>

int main()
{
    int x, y;

    printf("Input the 1st integer: ");
    scanf("%d", &x);
    printf("Input the 2nd integer: ");
    scanf("%d", &y);

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("\n");

    for (int i = x; i <= y; i++)
    {
        if ((i % 7) == 2 || (i % 7) == 3)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");

    return 0;
}