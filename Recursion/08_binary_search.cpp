#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(int arr[], int key, int s, int e)
{
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
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
    int arr[5] = {2, 4, 5, 8, 88};
    int size = 5;

    bool ans = binarySearch(arr, 88, 0, size - 1);

    cout << ans << endl;
}