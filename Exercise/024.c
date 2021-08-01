#include <stdio.h>

int main()
{
    int a,b;

    printf("Input the 1st number: ");
    scanf("%d", &a);
    printf("Input the 2nd number: ");
    scanf("%d", &b);

    if((a%b == 0)|| (b%a ==0)){
        printf("\nMultiplied!\n\n");
    }
    else
    {
        printf("\nNot Multiplied!\n\n");
    }
    
    
    return 0;
}