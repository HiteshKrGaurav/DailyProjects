/* 

gcc 042.c -lm -o 042

*/

#include <stdio.h>
// #include <math.h>

int main()
{
    int a;
    printf("Input numbers of lines: ");
    scanf("%d", &a);

    printf("\n");

    for (int i = 1; i <= a; i++)
    {
        // for (int j = 1; j <= 3; j++)
        // {
        //     int b = pow(i, j);
        //     printf("%d ", b);
        // }
        // printf("\n");

        printf("%d %d %d\n", i, i * i, i * i * i);
    }
    printf("\n");

    return 0;
}