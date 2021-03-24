#include<stdio.h>
main()
{
    char c;
    FILE *f= fopen("2c.txt","r");
    if(f==NULL)
    printf("Unsuccessful file opening attempt");
    else
    for(;;)
    {
        c=fgetc(f);
        if(c!=EOF)
        printf("C=%c\nASCII=%d\n",c,c);
        else
        return 0;
    }    
}
