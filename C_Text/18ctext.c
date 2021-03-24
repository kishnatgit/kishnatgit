#include<stdio.h>
main()
{
    for(int i=5;i>=1;i--)
    {
        for(int n=5;n>=i;n--)
        {
            printf("%d",n);
        }
        printf("\n");
    }
}