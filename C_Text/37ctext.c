#include<stdio.h>
main()
{
    char string[50];                                //Finding length of a string using user-defined function.
    unsigned int length;
    printf("Enter The String:");
    gets(string);
    length=StringLength(string);
    printf("The Lenth of The String '%s' is: %d\n",string,length);
}
StringLength(char x[])
{
    int count=0;
    for(int i=0;x[i]!='\0';i++)
    {
        count++;
    }
    return count;
}