#include<stdio.h>
main()
{
    char s;
    FILE *file;
    file=fopen("ctestingfileforasciicodeofachar.txt","r");
    if(file==NULL)
    printf("Unsuccessfull File Opening Attempt");
    else
    for(;;)
    {
        s=fgetc(file);
        if(s!=EOF)
        printf("Your Character=%c\n%d's ASCII Code=%d\n",s,s,s);
        else
        return 0 ;
    }
}
