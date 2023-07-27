#include <stdio.h>
#include <stdlib.h>

int print(int n)
{

    if (n > 0)
    {
        printf("%d\n", n);
        // n = print(n + 1);
        print(n - 1);
        // return n;
    }
    else
    {
        return 0;
    }
}

void main()
{
    print(10);
}