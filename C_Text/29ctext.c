#include<stdio.h>
main()
{   
    int n,r,r_cube,r_cube_sum,temp;                             //Armstrong No: ex:- 1634(here r=4)
    for(n=1;n<=100000;n++)                                                // here to check a 3digit no. so cube product is performed.
    {
        r_cube_sum=0;
        temp=n;
        for(;n>0;)
        {
            r=n%10;
            r_cube=r*r*r;
            r_cube_sum=r_cube_sum+r_cube;
            n=n/10;
        }
        n=temp;
        if(n==r_cube_sum)
        printf("%d is an Armstrong number.\n",n);
    }
}
