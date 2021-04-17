#include <stdio.h>                           //Call by reference.
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
main()
{
    int x, y, sum;
    float avg;
    printf("Enter two Numbers:");
    scanf("%d%d", &x, &y);
    sumandavg(x, y, &sum, &avg);
    printf("The Sum and Average of %d and %d is %d and %f\n", x, y, sum, avg);
}