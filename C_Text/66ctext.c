#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    int n;
    printf("Enter The Value of n:");
    scanf("%d", &n);
    int length = n * 2 - 1;
    for (int a = 1; a <= length; a++)
    {                                                       //for rows.
        for (int b = 1; b <= length; b++)
        {                                                       //for columns.
            int pttn1 = a <= length - a ? a - 1 : length - a;
            int pttn2 = b <= length - b ? b - 1 : length - b;
            int pttn3 = pttn1 < pttn2 ? pttn1 : pttn2;
            printf("%d ", n - pttn3);
        }
        printf("\n");
    }
}