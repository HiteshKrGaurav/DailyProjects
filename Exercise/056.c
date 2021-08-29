#include <stdio.h>

int main()
{
    int a;

    printf("Integer value = ");
    scanf("%d", &a);
    a = a << 2;

    printf("The left shifted data is = %d\n", a);

    return 0;
}