#include<stdio.h>
#include<string.h>
main()
{
    char string1[50],string2[40];												///Merging Two Strings.
    int i,len1,len2;
    printf("Enter The 1st String:\n");
    gets(string1);
    printf("Enter The 2nd String following a space'_':\n");
    gets(string2);
    len1=strlen(string1);
    len2=strlen(string2);
    for(i=0;i<=len2;i++)
    {
        string1[len1+i]=string2[i];
    }
     printf("%s\n",string1);
   
}
