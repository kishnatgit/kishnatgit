#include<stdio.h>
main()
{       
    int n;
    for(int i=1;i<=9;i++)
    {
        for(n=9;n>i;n--)
        {
            printf(" ");
        }
        while(n>=1)
            {  
                printf("%d",n);
                n--;
            }
        printf("\n");
    }
} 