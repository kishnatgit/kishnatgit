#include<stdio.h>
main()
{
    int sum;                                        //Displaying all the perfect numbers from 1 to 100
    for(int n=1;n<=10000;n++)
    {
        sum=0;
        for(int i=1;i<n;i++)
        {
        if(n%i==0)
            { 
                sum=sum+i;
            }
        }   
            if(n==sum)
            printf("The Perfect No.s are:- %d\n",n);               
    }
}