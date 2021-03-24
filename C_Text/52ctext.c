#include <stdio.h>
#include <stdlib.h>                 //Reversing an array of size num.
int main()
{
    int num, *arr;
    printf("Enter the No.of elements to be stored in array:");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
        for(int n=0;n<=(num/2)-1;n++)
        {
            int temp_n=n;
            int temp= *(arr+n);
            *(arr+n)=*(arr+(num-(temp_n+1)));
            *(arr+(num-(temp_n+1)))=(temp);
        }
    
    for(int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}