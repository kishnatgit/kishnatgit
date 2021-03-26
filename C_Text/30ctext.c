#include<stdio.h>
main()
{
    int n,r,temp,sum=0;                                     //Number Reversing.
    printf("Enter The Number:-");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    printf("The Reverse of %d is %d\n",n,sum);
}