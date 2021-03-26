#include<stdio.h>
struct students
{
	int Sno;
	char SName[50];
	int SMarks[5];
};
main()
{
	struct students s[5];
	int i,n,r;
	for(i=0;i<5;i++)
	{
		printf("Enter Student Details as:\nSno.,SName,SMarks of 5 Subjects\n");
		scanf("%d",&s[i].Sno);
		scanf("%s",&s[i].SName);
		for(n=0;n<5;n++)
		{
			scanf("%d",&s[i].SMarks[n]);
		}
		printf("Sno=%d\nSname=%s\n",s[i].Sno,s[i].SName);
		for(r=0;r<5;r++)
		{
			printf("Smarks=%d\n",s[i].SMarks[r]);
		}
	}
}
