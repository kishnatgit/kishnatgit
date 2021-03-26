#include<stdio.h>
main()														//pointers
{
	int a=50,b=100;
	printf("Before Swaping: %d\t%d\n",a,b);
	swap(a,b);
	printf("After Swiping: %d\t%d",a,b);
	getch();
}
swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("After Swaping: %d\t%d",*x,*y);
}
