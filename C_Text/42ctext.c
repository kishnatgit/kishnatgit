#include<stdio.h>
struct emp
{
	int eno;								//Structures in C.
	char ename[30];
	float salary;
};
main()
{
	struct emp e={001,"Uttam",50000};
	printf("The Employee Details is:\nEno.=%d\nEname=%s\nSalary=%f\n",e.eno,e.ename,e.salary);
	getch();
}
