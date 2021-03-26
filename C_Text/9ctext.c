#include<stdio.h>
main()
{
    int n=1;
    while(n<=50)
    {
        if(n%2==0)
        {
            printf("n = %d\n",n);
        }
        ++n;
    }
}