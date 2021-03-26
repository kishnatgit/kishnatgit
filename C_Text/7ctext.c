#include<stdio.h>
main()
{
    int a;
    printf("Enter The Number:- ");
    scanf("%d",&a);
        if(a%2==0)
        printf("%d Is an Even Number\n",a);
        else         
        printf("%d Is an Odd Number\n",a);
      getch();
}