#include<stdio.h>
main()
{
	char string[50];									//String Conversion to Uppercase
	int i;
	printf("Enter The String:");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]=string[i]-32;
		}
	}
	printf("The Converted String is:%s",string);
	getch();
}
