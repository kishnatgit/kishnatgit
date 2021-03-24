#include<stdio.h>
main()
{
    int n,i,r,r_factorial,temp,sum_of_r_factorials=0;                             //Checking for Strong number.
    printf("The Number:-");
    scanf("%d",&n);
    temp=n;
    for(;n>0;)
    {
        r=n%10;
        r_factorial=1;
        for(i=1;i<=r;i++)
        {
            r_factorial=i*r_factorial;
        }
        sum_of_r_factorials=sum_of_r_factorials+r_factorial;
        n=n/10;
    }
    n=temp;
    if(n==sum_of_r_factorials)
    printf("%d is a strong no.\n",n);
    else 
    printf("%d is not a strong no.\n",n);
    getch();
}
