#include <stdio.h> //using Strtol().
#include <stdlib.h>
main()
{
    char *ch, *ch_str;
    ch = (char *)malloc(1024 * sizeof(char));
    ch_str = (char *)malloc(sizeof(ch));
    printf("Enter the String:");
    gets(ch);
    int n = strtol(ch, &ch_str, 0);
    printf("The Numeric part of the input is '%d'\n", n);
    printf("The string part of the input is '%s'\n", ch_str);
}