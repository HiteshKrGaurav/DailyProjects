#include <stdio.h>

int main()
{
    int a;

    printf("Input an integer: ");
    scanf("%d", &a);

    printf("\n");

    for (int i = 2; i <= a; i += 2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }
    
    printf("\n");

    return 0;
}