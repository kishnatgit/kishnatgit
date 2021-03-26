#include<stdio.h>
typedef char* String;
String read(void);
main()
{
	String str;
	str=read();
	printf("Hello %s",str);
	
}
String read(void)
{
	String str;
	printf("Enter The String:\n");
	gets(str);
	return str;
}
