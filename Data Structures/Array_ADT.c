// Creating an Abstract Data type of Array

struct Array_ADT
{
    int used_size;
    int total_size;
    int *ptr;
};

create_array(struct Array_ADT *str, int u_size, int t_size)
{
    str->used_size = u_size;
    str->total_size = t_size;
    (*str).ptr = (int *)malloc((*str).total_size * sizeof(int));
}

set_array(int *array, int u_size)
{
    for (int i = 0; i < u_size; i++)
    {
    printf("Enter Element: %d- ",i+1);
        scanf("%d", &array[i]);
    }
}
    
show_array(int *array, int u_size)
{
    printf("Showing Elements:\n");
    for (int i = 0; i < u_size; i++)
    {
        printf("%d\n", array[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
    struct Array_ADT str;
    create_array(&str, 5, 20);
    set_array(str.ptr, str.used_size);
    show_array(str.ptr, str.used_size);
}