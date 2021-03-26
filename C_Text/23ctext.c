#include<stdio.h>
main()
{
    unsigned long long int n,factorial=1;
    printf("Enter The No.:-");
    scanf("%llu",&n);
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The Factorial of %llu is %llu.\n",n,factorial);
}