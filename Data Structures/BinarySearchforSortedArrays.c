#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

deletion(int array[], int index, int size)
{
    for (int i = index; i < size; i++)
    {
        array[i] = array[i + 1];
    }
}

displayNewArray(int array[], int size)
{
    printf("The Shorted Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

arraysorting(int array[], int size)
{
    int newSize = size;
    int newarray[newSize];
    for (int n = 0; n < newSize; n++)
    {
        int index;
        int lowerElement = array[0];
        for (int i = 0; i < size; i++)
        {
            if (array[i] <= lowerElement)
            {
                lowerElement = array[i];
                index = i;
            }
        }
        newarray[n] = lowerElement;
        deletion(array, index, size);
        size -= 1;
    }
    displayNewArray(newarray, newSize);
    for (int c = 0; c < newSize; c++)
    {
        array[c] = newarray[c];
    }
}

int BinarySearch(int array[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
void main()
{
    int array[] = {44, 45, 56654, 56655, 7458, 23545, 25000140, 30084, 789, 1005, 4444444, 2215, 444, 4455, 6458, 7885};
    int size = sizeof(array) / sizeof(int);
    printf("Sorting The Array.......\n");
    arraysorting(array, size);
    int element = 23545;
    printf("Finding The Element %d in the Array.......\n", element);
    int found = BinarySearch(array, size, element);
    printf("The Element %d is found at %d index.", element, found);
}