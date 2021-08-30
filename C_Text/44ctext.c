#include <stdio.h>
main() //pointers
{
	int a = 50, b = 100;
	printf("Address:-%d\t%d\n",&a,&b);
	printf("Before Swaping: %d\t%d\n", a, b);
	swap(&a, &b);
	printf("After Swiping: %d\t%d\n",a,b);
	// getch();
}
swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("After Swaping: %d\t%d\n", x, y);   ////They Will Print only the address of a and b if written x and y.
}