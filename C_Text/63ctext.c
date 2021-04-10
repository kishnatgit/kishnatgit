#include <stdio.h>
main()
{
    int n;
    printf("The Prime Numbers between 1 to 200 are:-\n");
    for (n = 1; n <= 200; n++)
    {
        int count = 0;                                          
        ///To print all prime no.s between 1 to 200.
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
            printf("%d\n", n);
    }
}
