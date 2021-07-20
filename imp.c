#include <stdio.h>

int odd_even(int num)
{
    int flag = 0;
    int temp = (num % 2);

    if (temp == 0)
    {
        flag = 1;
    }

    return flag;
}

void main_func(int num)
{
    int i = 1;
    printf("%d\n", num);
    while (num != 1)
    {
        i++;
        int flag = odd_even(num);
        if (flag == 1)
        {
            num = (num / 2);
            printf("%d\n", num);
        }
        else
        {
            num = ((num / 3) + 1);
            printf("%d\n", num);
        }
    }

    printf("\nIn %d steps the result is %d.\n\n", i, num);
}

int main()
{
    int number;
    printf("hello\n");
    printf("Enter any Number :");
    scanf("%d", &number);

    main_func(number);

    // int num = 3;
    // printf("num is %d\n", num%2);

    return 0;
}
