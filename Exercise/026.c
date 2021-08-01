#include <stdio.h>

int main()
{
    printf("Even numbers between 1 to 50(inclusive):\n");

    for (int i = 1; i <= 25; i++)
    {
        printf("%d ", i * 2);
        if (i == 16)
        {
            printf("\n");
        }
    }
    printf("\n\n");

    return 0;
}