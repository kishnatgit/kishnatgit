#include<stdio.h>
main()
{
    int n,r,i,r_factorial,sum_of_r_factorials,temp;                             //Checking for Strong numbers between a range of 1 to 1B.
    for(n=1;n<=1000000000;n++)                                                  
    {                                                                           //time took 02:04min
        temp=n;
        sum_of_r_factorials=0;
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
    }
}
