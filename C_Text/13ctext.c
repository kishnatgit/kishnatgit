#include<stdio.h>
main()
{
    int n,sum=0;
    printf("Enter The Number:-");                        //printing sum of first n numbers
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d\n",sum);
}