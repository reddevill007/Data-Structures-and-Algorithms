#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int n)
{
    int i = 0, j = n - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < r)
        {
            i++;
        }
        while (arr[j] == 1 && i < r)
        {
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 1, 0, 1, 0, 0};
    // printArr(arr, 10);
    sort01(arr, 10);
    printArr(arr, 10);
    return 0;
}