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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printArr(arr, 8);
    reverseArr(arr, 8);
    printArr(arr, 8);

    return 0;
}