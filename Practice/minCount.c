#include <stdio.h>
#include <stdlib.h>

int MinimumCost(int input1, int input2[], int input3)
{
    // for (int i = 0; i < n; i++)
    // scanf("%i", &input2[i]);
    // int minCost = INT_MAX;
    int minCost = 0;
    int count = 0, temp = 0, n = 0;
    int temp_array[sizeof(input2) / 2];
    // int k;
    // scanf("%i", &input3);
    if (input1 == 1)
        return input2[0];
    for (int i = 0; i < input1 - 1; i = i + 2)
    {
        // if (input3 * (input2[i] + input2[i + 1]) < minCost)
        minCost = input3 * (input2[i] + input2[i + 1]);
        // printf("%i\n", minCost);
        temp_array[n] = minCost;
        count++;
        n++;
    }
    printf("%d",temp_array[n]);
    for (int i = 0; i < count; i++)
    {
        temp = temp + temp_array[i];
    }
    temp_array[count] = temp;
    minCost = 0;
    for (int i = 0; i <= count; i++)
    {
        minCost = minCost + temp_array[i];
    }

    // printf("%i\n", minCost);
    return minCost;
}

void main()
{
    int n, array[100], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &k);
    printf("%d", MinimumCost(n, array, k));
}