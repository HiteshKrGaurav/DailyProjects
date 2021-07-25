/* 

#####
#
#
####
#
#
#

*/

#include <stdio.h>

int main()
{
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("#");
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        printf("#\n");
    }

    for (int i = 0; i < 4; i++)
    {
        printf("#");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

    printf("\n");

    printf("\n");

    /* 
    
      ######
    ##      ##
    #
    #
    #
    #
    #
    ##      ##
      ######
    
    */

    {
        printf("  ");
        for (int i = 0; i < 6; i++)
        {
            printf("#");
        }
        printf("\n");
    }

    {
        printf("##");
        for (int i = 0; i < 6; i++)
        {
            printf(" ");
        }
        printf("##\n");
    }

    {
        for (int i = 0; i < 6; i++)
        {
            printf("#\n");
        }
    }

    {
        printf("##");
        for (int i = 0; i < 6; i++)
        {
            printf(" ");
        }
        printf("##\n");
    }

    {
        printf("  ");
        for (int i = 0; i < 6; i++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}