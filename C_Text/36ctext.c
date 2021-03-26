#include<stdio.h>
#include<string.h>
main()
{
    char string[50];
    unsigned int length;
    printf("Enter The String\n");
    gets(string);
    length=strlen(string);
    printf("The Length of String:\n %s is\n     %d\n",string,length);
}