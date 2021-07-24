#include <stdio.h>

int main()
{
    char name[30], DOB[20], mobile[15];
    printf("Enter Required Details \n");

    printf("Name :");
    fgets(name, 30, stdin);

    printf("DOB :");
    fgets(DOB, 20, stdin);

    printf("Mobile :");
    fgets(mobile, 15, stdin);

    printf("\n\nDetails:\n");

    printf("Name    : %s", name);
    printf("DOB     : %s", DOB);
    printf("Mobile  : %s\n", mobile);

    return 0;
}
