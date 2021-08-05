#include <stdio.h>

int main()
{
    int x, y[7];
    printf("Input the 5 members of the army:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &y[i]);
        if (y[i] < 0)
        {
            y[i] = 100;
        }
    }

    printf("\nArray values are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("n[%d] = %d\n", i, y[i]);
    }
    printf("\n");

    return 0;
}