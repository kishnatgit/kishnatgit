#include<stdio.h>
#include<string.h>
main()
{															//Reversing A String.
    char string[50];
    int i,l,temp;
    printf("Enter The String:\n");
    gets(string);
    i=0;
    l=strlen(string);
    while(i<l)
    {
        temp=string[i];
        string[i]=string[l];
        string[l]=temp;
        i++;
        l--;
    }
}
