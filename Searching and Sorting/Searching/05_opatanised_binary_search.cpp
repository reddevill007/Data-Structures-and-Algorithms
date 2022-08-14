#include <bits/stdc++.h>

using namespace std;

int binary_search(int n, int arr[], int val)
{
    cout << "Inside binary search" << endl;
    int s = 0, e = n - 1;

    // to avoid max int value i.e 2^31 - 1
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == val)
        {
            return mid;
        }

        if (val < arr[mid])
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 23, 45, 67, 88, 89, 90, 93, 95, 100};
    int size = 10, val = 100;

    cout << "Going into binary search" << endl;

    int index = binary_search(size, arr, val);

    cout << "Found at index " << index << endl;
}