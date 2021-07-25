/* 

'''

π = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...

'''

num = int(input("Enter a number according to your computer status :"))
a = 1

d = 0

for i in range(num):
    b = a+2
    print(f"{a},{b}", end="")
    
    

    c = 1/a - 1/b
    d = d + c
    a = a + 4
print("")
print("Value of pi is", 4*d)


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double num = 100000, a = 1;
    double d;

    // printf("Welcome to pi calculaion Program\n");
    // printf("Precision level :\n");
    // scanf("%d", &num);

    for (double i = 0; i < num; i++)
    {
        double b = a + 2;
        printf("%lf, %lf,", a, b);

        double c = ((1 / a) - (1 / b));
        d += c;
        a += 4;
    }

    printf("\n");

    printf("value of pi is %lf\n", d * 4);

    return 0;
}