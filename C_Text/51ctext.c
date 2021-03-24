#include<stdio.h>
#include<math.h>
main()                                              //Finding Armstrong numbers in a given range.
{
    //int sum,count;
    //printf("input:");
    //scanf("%d",&num);
    //int temp=num;
    for(int i=1;i<=100000;i++)
    {
        int count=0;
        int sum=0;
        int temp=i;
        while(i!=0)
        {
            i=i/10;
            count++;    
        }
        i=temp;
        while(i!=0)
        {
            int r=i%10;
            int power=pow(r,count);
            sum=sum+power;
            i=i/10;
        }
        i=temp;
        if(i==sum)
        printf("%d Is an Armstrung Number.\n",i);
    }
}
