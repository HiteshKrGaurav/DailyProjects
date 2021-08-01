#include <stdio.h>

int main()
{
    int a, b, input;

    printf("Input an Integer: ");
    scanf("%d", &input);

    if (input >= 0 && input < 80)
    {
        a = ((input) - (input % 10));
        b = ((input) - (input % 10) + 10);

        printf("\nRange [%d, %d]\n\n", a, b);
    }
    else
    {
        printf("\nError!\n\n");
    }

    return 0;
}