#include<stdio.h>
main()
{
    int Array[30],n,i,location,new_value,new_Array_values;          //Single Element Insertion to an Array.
    printf("Enter The No. of Locations:\n");
    scanf("%d",&n);
    printf("Enter %d values of Array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    printf("Enter The Location Where A New Value To Be Stored:\n");
    scanf("%d",&location);
    printf("Enter The New Value:\n");
    scanf("%d",&new_value);
    for(i=n-1;i<=location;i--)
    {
        Array[i+1]=Array[i];
    }
    Array[location]=new_value;
    printf("%d",Array);
}
