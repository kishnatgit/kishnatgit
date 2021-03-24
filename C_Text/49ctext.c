#include<stdio.h>
main()
{
    char s;
    FILE *f;
    f= fopen("ctestingfile.text","r");
    if(f==NULL)
    printf("Unsuccefull File Opening Attempt");
    else
    for(;;)
    {
        s=fgetc(f);
        if(s!=EOF)
        printf("%c",s);
        else
        return 0;
    }
}