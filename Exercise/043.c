#include <stdio.h>

int main()
{
    int a = 1, p, q;

    printf("Input numbers of line: ");
    scanf("%d", &p);
    printf("Numbers of characters in a line: ");
    scanf("%d", &q);

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}