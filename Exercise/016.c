#include <stdio.h>

int main()
{
    int amount, notes;

    printf("Input the amount: ");
    scanf("%d", &amount);

    printf("There are: \n\n");

    notes = amount / 100;
    amount = amount % 100;
    printf("%d Note(s) of 100.00\n", notes);

    notes = amount / 50;
    amount = amount % 50;
    printf("%d Note(s) of 50.00\n", notes);

    notes = amount / 20;
    amount = amount % 20;
    printf("%d Note(s) of 20.00\n", notes);

    notes = amount / 10;
    amount = amount % 10;
    printf("%d Note(s) of 10.00\n", notes);

    notes = amount / 5;
    amount = amount % 5;
    printf("%d Note(s) of 5.00\n", notes);

    notes = amount / 2;
    amount = amount % 2;
    printf("%d Note(s) of 2.00\n", notes);

    notes = amount;
    printf("%d Note(s) of 1.00\n\n", notes);

    return 0;
}