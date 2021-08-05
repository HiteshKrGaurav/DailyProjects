#include <stdio.h>

int main()
{
    float marks, ave = 0;

    printf("Input Mathematics marks (0 to terminate)\n");

    for (float i = 1; marks > 0; i++)
    {
        scanf("%f", &marks);
        ave = (ave + marks);

        if (marks <= 0)
        {
            ave = (ave/(i-1));
        }
    }
    printf("\nAverage marks in Mathematics: %.2f\n\n", ave);
    return 0;
}