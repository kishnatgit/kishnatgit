#include <iostream>

// #include <bits/stdc++.h>

// using namespace std;

int main_new(int input1, int input[], int input2)
{

    int mincost = INT_MAX, sum = 0, index, i, temp;

    while (input1 != 1)

    {

        mincost = INT_MAX;

        for (i = 1; i < input1; i++)

        {

            if ((input3 * (input2[i] + input2[i - 1])) < mincost)

            {

                temp = input2[i] + input2[i - 1];

                mincost = input3 * temp;

                index = i;
            }
        }

        if ((input3 * (input2[0] + input2[input1 - 1])) < mincost)

        {

            temp = input2[0] + input2[input1 - 1];

            mincost = input3 * temp;

            input2[0] = temp;

            input1 = input1 - 1;
        }

        else

        {

            input2[index - 1] = temp;

            for (int j = index; j < input1; j++)

            {

                input2[j] = input2[j + 1];
            }

            input1 = input1 - 1;
        }

        sum = sum + mincost;
    }

    return sum;
}

void main
{

    int n = 3, k = 2;
    int arr[3] = {1, 2, 3};

    printf("%d", main_new(n, arr, k));
}