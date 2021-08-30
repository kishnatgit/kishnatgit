#include <stdio.h>
main()
{
    int a = 10, b = 20, c = 30, d = 40, e = 45, r = 54;
    printf("%d\n%d\n", &a, &b);
    printf("%d\n", add(&a, &b));
    printf("%d\n", add(&c, &d));
    printf("%d\n", add(&e, &r));
}
int add(int *x, int *y)
{
    int sum = (*x + *y);
    return sum;
}