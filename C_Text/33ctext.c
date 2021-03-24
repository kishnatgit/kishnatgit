#include<stdio.h>
main()
{
    int array[6]={20,30,40,50,60,70},i,sum=0;
    for(i=0;i<6;i++)
    {
        sum=sum+array[i];
    }
    printf("The Sum is:%d\n",sum);
}