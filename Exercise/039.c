#include <stdio.h>

int main()
{
    int x, y, z = 0;

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

    for (int i = x; i <= y; i++)
    {
        if ((i % 17) != 0)
        {
            z = z + i;
        }
    }

    printf("\nSum = %d\n\n", z);

    return 0;
}