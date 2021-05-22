#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    FILE *f;
    char *s;
    f=fopen("sample.txt","r");
    while(fgets(s,4,f)!=NULL)
    puts(s);
    fclose(f);
}