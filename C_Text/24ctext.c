#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("Enter The No:-");                   //sum of the digits in a given number.
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("%d\n",sum);
}