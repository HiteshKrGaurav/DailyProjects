#include <stdio.h>

int main()
{
    float num[4];
    int big = 0, small = 0;

    printf("Input four numbers: ");
    scanf("%f %f %f %f", &num[0], &num[1], &num[2], &num[3]);

    for (int i = 0; i < 4; i++)
    {
        if (num[small] > num[i])
        {
            small = i;
        }
        if (num[big] < num[i])
        {
            big = i;
        }
    }

    float difference = num[big] - num[small];

    printf("Difference is %.4f\n", difference);

    return 0;
}