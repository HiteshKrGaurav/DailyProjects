#include <stdio.h>

int main()
{
    int len;
    printf("Input the length of the array: ");
    scanf("%d", &len);

    int array_n[len];

    printf("Input the array elements:\n");

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array_n[i]);
    }

    int pos = 0, num = array_n[0];

    for (int i = 0; i < len; i++)
    {
        if (num > array_n[i])
        {
            num = array_n[i];
            pos = i;
        }
    }

    printf("\nSmallest Value: %d\n", num);
    printf("Position of the element: %d\n\n", pos);

    return 0;
}