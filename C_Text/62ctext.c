#include <stdio.h>
main()
{
    int i, sum = 0, count = 0;
    for (i = 1; i > 0; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            count++;
        }
        if (count == 30)
            break;
    }
    printf("The sum of 1st 30 even numbers is: %d.", sum);
}