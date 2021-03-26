#include<stdio.h>
main()
{       
    int n;
    for(int i=5;i>=1;i--)
    {
        for(n=1;n<i;n++)
        {
            printf(" ");
        }
        for(;n<=5;n++)
        {  
            printf("*");
        }
        printf("\n");
    }
} 