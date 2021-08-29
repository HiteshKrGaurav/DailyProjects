#include <stdio.h>

int main()
{
    enum week
    {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };
    char week_names[][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    printf("\n");
    for (int i = Sun; i <= Sat; i++)
    {
        printf("%s = %d\n", week_names[i], i);
    }
    printf("\n");

    return 0;
}