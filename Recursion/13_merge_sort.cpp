#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy value
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // Sort left part
    mergeSort(arr, s, mid);

    // Sort left part
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

int main()
{
    int arr[5] = {2, 1, 5, 9, 6};
    int n = 5;
    cout << "Before sorting" << endl;
    print(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "After sorting" << endl;
    print(arr, n);
}