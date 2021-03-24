#include<stdio.h>
main()
{
    int n,result;                                                         ///Recursion                                      
    printf("Enter The No.");
    scanf("%d",&n);
    result=fact(n);
    printf("%d\n",result);
}
int fact(int n)
{
    int result;
    if (n==0)
    result=1;
    else 
    result=n*fact(n-1);
    return result;
}