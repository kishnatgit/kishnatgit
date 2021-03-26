#include<stdio.h>
main()
{
    int n,c=150,sp;
    printf("Enter No. of Rows:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=c/2-i;sp++)
        {
            printf(" ");
        }
            for(int st=1;st<=2*i-1;st++)
                {
                    printf("*");
                }
                printf("\n");
    }

}