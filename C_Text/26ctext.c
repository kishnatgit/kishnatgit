#include<stdio.h>
main()
{
    int n,count=0;                                          ///To check a no. is a prime no. or not.
    printf("Enter The Number:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;                                                                        
        }
    }
        if(count==2)
        printf("%d is a Prime No.\n",n);
        else
        printf("%d is not a Prime No.\n",n);   
}
