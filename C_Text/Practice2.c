#include <stdio.h>
#include <stdlib.h>

// int Greatest(int n[], int length)
// {
//     int greatest = 0, index = 0;
//     for (int i = 0; i < length; i++)
//     {
//         if (n[i] > greatest)
//         {
//             greatest = n[i];
//             index = i;
//         }
//     }
//     printf("%d\n%d", greatest, index);
// }

// void main()
// {
//     int array[] = {12, 25, 45, 658, 145, 475, 354, 752, 444, 254, 732, 258};
//     int len = sizeof(array) / 4;
//     Greatest(array, len);
// }

// Using Pointer!
int Greatest(int *n, int length)
{
    int greatest = 0, index = 0;
    for (int i = 0; i < length; i++)
    {
        if (n[i] > greatest)
        {
            greatest = n[i];
            index = i;
        }
    }
    printf("%d\n%d", greatest, index);
}

void main()
{
    int len = 5;
    int *array = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
    {

        scanf("%d", (array + i));
        printf("%d\n", ((array + i)));
    }

    // int len = sizeof(array) / 4;
    Greatest(array, len);
}