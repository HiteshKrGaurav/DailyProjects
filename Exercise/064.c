#include <stdio.h>

int main()
{
    int num = 0, num1 = 0, lastnum, min, max;
    float ave = 0;

    printf("\nInput a positive integer: ");
    scanf("%d", &num);

    max = num;
    min = num;

    while (num > 0)
    {
        num1++;
        ave += num;
        // lastnum = num;

        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }

        printf("Input next positive integer: ");
        scanf("%d", &num);
    }

    ave = (float)ave / num1;

    printf("\nNumber of positive values entered is %d\n", num1);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f\n\n", ave);

    return 0;
}

/* 

Number of positive values entered is 4
Maximum value entered is 43
Minimum value entered is 15
Average value is 30.0000

*/
