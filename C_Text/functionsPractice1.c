#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void main()
{
    int int1 = 22, int2 = 44;

    int total = sum(int1, int2); // call by reference
    printf("%d\n", total);

    int total2 = sum(20, 30); /// call by value
    printf("%d\n", total2);

    int total3 = sum(55, 20);
    printf("%d\n", total3);

    int1 = 30;
    int2 = 40;
    printf("%d", sum(int1, int2));
}