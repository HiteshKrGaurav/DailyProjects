#include <stdio.h>

int main()
{
    int pass, b = 1;

    while (b == 1)
    {
        printf("Input the password: ");
        scanf("%d", &pass);
        if (pass == 1234)
        {
            printf("Correct Password\n");
            b = 0;
        }
        else
        {
            printf("Incorrect password!\n\n");
        }
        
    }

    return 0;
}