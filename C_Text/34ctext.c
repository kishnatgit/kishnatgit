#include<stdio.h>
main()
{
    int Array[10]={566,102,250,460,245,98,478,356,452,652},large,i;             //Finding the largest no. in a given array.
    large=Array[0];
    for(i=1;i<10;i++)
    {
        if(Array[i]>large)
        {
            large=Array[i];
        }
    }
    printf("%d is the largest no. in the Array\n",large);
}