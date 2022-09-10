#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int ct = 0;
    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            ct++;
        }
    }

    int pivotIndex = s + ct;

    // Place pivot at rigth place
    swap(arr[pivotIndex], arr[s]);

    // Sorting other element
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    // Left part
    quickSort(arr, s, p - 1);

    // Right part
    quickSort(arr, p + 1, e);
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
    int arr[5] = {2, 4, 1, 6, 7};
    int n = 5;

    cout << "Before sorting" << endl;
    print(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "After sorting" << endl;
    print(arr, n);
}