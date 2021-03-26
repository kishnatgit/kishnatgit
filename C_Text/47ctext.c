#include<stdio.h>
main()
{
    char c;
    FILE *f= fopen("c.txt","r");
    if(f==NULL)
    printf("Unsuccessful file opening attempt");
    else
    for(;;)
    {
        c=fgetc(f);
        if(c!=EOF)
        printf("%c",c);
        else
        return 0;
    }
}
