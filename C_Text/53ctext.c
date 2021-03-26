#include <stdio.h>
#include <stdlib.h>                 //New Element Insertion using pointers.
main()
{
    int num, *arr,location,new_value;
    printf("Enter the No.of elements to be stored in array:");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
        printf("Enter The Location of Insertion:");
        scanf("%d",&location);
        printf("Enter The New Value To Be Stored On The New Location:");
        scanf("%d",&new_value);
        //arr=(void*)realloc(arr,location*sizeof(int));
        for(int n=num-1;n>=location-1;n--)
        {
            *(arr+(n+1))=*(arr+n);
        }
            *(arr+(location-1))=(new_value);
    for(int i = 0; i < num+1; i++)
        printf("%d\n", *(arr + i));
}