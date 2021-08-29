#include <stdio.h>

int main()
{
    int array_n[5];

    printf("Input the 5 members of the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array_n[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        int temp = array_n[i];
        array_n[i] = array_n[4 - i];
        array_n[4 - i] = temp;
    }
    
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("array_n[%d] = %d\n", i, array_n[i]);
    }
    printf("\n");

    return 0;
}