#include <stdio.h>
#include <stdlib.h>

int main()                  //Printing Tokens.
{
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter Your Text:");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(char *i=s;*i!=NULL;i++)
    {
        if(*i==' ')
        *i="/n";
    }
    printf("%s",s);
    return 0;
}