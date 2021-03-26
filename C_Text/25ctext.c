#include<stdio.h>
main()
{
    int n,sum=0,r,temp;                                                      /// checking a Palindrome Number.
    printf("Enter The no. To Check:- ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    printf("%d is a Palindrome Number.\n",n);
    else
    printf("%d is not a Palindrome Number.\n",n);
}