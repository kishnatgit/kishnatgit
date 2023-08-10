#include <stdio.h>
#include <stdlib.h>

void Summation(int array1[], int array2[], int *NEWpointer, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(NEWpointer + i) = array1[i] + array2[i];
    }
}

void PrintValues(int *pointer, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(pointer + i));
    }
}

void main()
{
    int n;
    printf("Enter the size Arrays: ");
    scanf("%d", &n);

    int Array1[n], Array2[n];
    int *pointer = (int *)malloc(n * sizeof(int));

    printf("Enter %d values into 1st Array", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Array1[i]);
    }

    printf("Enter %d values into 2nd Array", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Array2[i]);
    }

    Summation(Array1, Array2, pointer, n);
    PrintValues(pointer, n);
}
