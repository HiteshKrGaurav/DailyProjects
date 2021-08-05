#include <stdio.h>

int main()
{
    int A[5];

    printf("Input the 5 members of the array:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        if (A[i] < 5)
        {
            printf("A[%d] = %.1f\n", i, (float)A[i]);
        }
    }
    printf("\n");

    return 0;
}