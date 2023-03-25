#include <iostream>

// #include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int mincost = INT_MAX, sum = 0, index, i, temp;

    while (n != 1)

    {

        mincost = INT_MAX;

        for (i = 1; i < n; i++)

        {

            if ((k * (arr[i] + arr[i - 1])) < mincost)

            {

                temp = arr[i] + arr[i - 1];

                mincost = k * temp;

                index = i;
            }
        }

        if ((k * (arr[0] + arr[n - 1])) < mincost)

        {

            temp = arr[0] + arr[n - 1];

            mincost = k * temp;

            arr[0] = temp;

            n = n - 1;
        }

        else

        {

            arr[index - 1] = temp;

            for (int j = index; j < n; j++)

            {

                arr[j] = arr[j + 1];
            }

            n = n - 1;
        }

        sum = sum + mincost;
    }

    cout << sum;

    return 0;
}