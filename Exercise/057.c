#include <stdio.h>

int main()
{
    int original;
    double reversed = 0;
    printf("Input a number: ");
    scanf("%d", &original);

    {
        int temp;
        while (original != 0)
        {
            temp = original % 10;
            original /= 10;
            reversed += temp;
            reversed *= 10;
        }
        reversed /= 10;
    }

    printf("\n%.0lf\n\n", reversed);

    return 0;
}