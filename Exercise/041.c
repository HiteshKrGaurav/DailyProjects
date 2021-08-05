#include <stdio.h>

int main()
{
    int a, b = 1;

    printf("Input numbers of lines: ");
    scanf("%d", &a);

    printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}