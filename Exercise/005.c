#include <stdio.h>

int main()
{
    int h, w, area, perimeter;
    char unit[7] = "inches";

    h = 7;
    w = 5;
    area = h * w;
    perimeter = 2 * (h + w);

    printf("Perimeter of the Rectangle = %d %s\n", perimeter, unit);
    printf("Area of the Rectangle = %d %s\n", area, unit);

    return 0;
}

