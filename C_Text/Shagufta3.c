#include <stdio.h>
#include <stdlib.h>

void findMaxElement(int arr[], int length)
{
    int max = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("%d\n", max);
    printf("%d", maxIndex);
}

void main()
{
    int array[] = {5, 7, 8, 9, 3, 77, 99, 26, 37};
    // int length=array
    findMaxElement(array, 9);
}