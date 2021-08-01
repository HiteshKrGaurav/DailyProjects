#include <stdio.h>

int main()
{
    int a, MAX = 5, num[MAX], max = 0, pos;

    printf("Input 5 integers:\n");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            pos = i+1;
        }
    }

    printf("\nHighest Value: %d\n", max);
    printf("Position: %d\n\n", pos);

    return 0;
}