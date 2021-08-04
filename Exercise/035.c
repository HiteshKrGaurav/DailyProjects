#include <stdio.h>

int main()
{
    int a, b;

    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");

    printf("Input 1st no. of the pair: ");
    scanf("%d", &a);
    printf("Input 2nd no. of the pair: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("\nThe pair is in acending order!\n\n");
    }
    else
    {
        printf("\nThe pair is in decending order!\n\n");
    }

    return 0;
}