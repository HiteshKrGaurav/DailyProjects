#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    float x;

    for (int i = 0; i < 4; i++)
    {
        x += (float)a / b;
        a += 2;
        b *= 2;
    }

    printf("\n%.2f\n\n", x);

    return 0;
}