#include <stdio.h>

int main()
{
    int x, y;

    printf("Input the Coordinate(x,y):\n");

    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("\nOrigin Point!\n\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("\nQuadrant-I(+,+)\n\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nQuadrant-II(-,+)\n\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nQuadrant-III(-,-)\n\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nQuadrant-IV(-,+)\n\n");
    }
    else
    {
        printf("\nError!\n\n");
    }

    return 0;
}