#include<stdio.h>
main()
{
    int n,sum=0;                                        //checking a number is perfect no. or not
    printf("Enter The Number:-");                      
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        { 
            sum=sum+i;
        }
    }
        if(n==sum)
        printf("%d is a perfect Number\n",n);
        else
        printf("%d is an imperfect number\n",n);
}