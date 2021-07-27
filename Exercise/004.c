/* 

How to reversed a string

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = {'X', 'M', 'L', '\0'};

    // printf("Enter A string :");
    // fgets(str, 30, stdin);

    // First Method
    {
        char temp[30];
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            temp[i] = str[len - 1 - i];
        }
        temp[len] = '\0';
        // strcpy(str, temp);
        printf("The Reverse of %s is %s\n", str, temp);
    }

    // Second Method (Efficient (Low Memory Requirement))
    {
        printf("The Reverse of %s is ", str);

        int len = strlen(str);

        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
        str[len] = '\0';

        printf("%s\n", str);
    }
    return 0;
}