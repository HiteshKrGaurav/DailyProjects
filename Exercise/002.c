#include <stdio.h>

int main()
{
    // int version = __STDC_VERSION__;

    // if (version >= 201710)
    // {
    //     printf("We are using C18!\n");
    // }
    // else if (version >= 201112)
    // {
    //     printf("We are using C11!\n");
    // }
    // else if (version >= 199901)
    // {
    //     printf("We are using C99!\n");
    // }
    // else
    // {
    //     printf("We are using C89/C90!\n");
    // }

#if __STDC_VERSION__ >= 201710L
    printf("We are using C18!\n");
#elif __STDC_VERSION__ >= 201112L
    printf("We are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
    printf("We are using C99!\n")
#else
    printf("We are using C89/C90!\n")
#endif

    return 0;
}