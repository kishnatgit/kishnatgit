#include<stdlib.h>
#include<stdio.h>									//Dynamic Memory Allocation
struct emp{
	int eno;
	char ename[50];
	int esalary;
};
main()
{
	struct emp* emp;
	emp=(struct emp*)malloc(sizeof(struct emp));
	if(emp==NULL)
	printf("No Memory Allocated Successfully\n");
	else
	printf("Enter Employee Details:\n");
	scanf("%d%s%d",&emp->eno,emp->ename,&emp->esalary);
	printf("Employee Details:\nEno=%d\nEname=%s\nEsalary=%d",emp->eno,emp->ename,emp->esalary);
}
