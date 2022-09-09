#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArr(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int key, int s, int e)
{
    printArr(arr, s, e);
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
        cout << "Value of mid is: " << arr[mid] << endl
             << endl;
        if (key == arr[mid])
        {
            return true;
        }
        if (arr[mid] > key)
        {
            return binarySearch(arr, key, s, mid - 1);
        }
        return binarySearch(arr, key, mid + 1, e);
    }
    return false;
}

int main()
{
    int arr[14] = {2, 4, 5, 8, 9, 12, 23, 34, 45, 55, 66, 77, 88, 99};
    int size = 14;

    bool ans = binarySearch(arr, 99, 0, size - 1);

    cout << ans << endl;
}