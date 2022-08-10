#include <bits/stdc++.h>

using namespace std;

void reverseArr(int arr[], int size)
{
    int l = 0, r = size - 1;
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {3, 4, 1, 6, 3, 2, 4, 5};
    int ct1 = 0, ct2 = 0;

    printArr(arr1, 8);
    printArr(arr2, 8);
    for (int i = 0; i < 8; i++)
    {
        if (arr1[i] > arr2[i])
            ct1++;
        else
            ct2++;
    }

    cout << ct1 << " " << ct2 << endl;

    return 0;
}
