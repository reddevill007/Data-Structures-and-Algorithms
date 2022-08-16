#include <bits/stdc++.h>

using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;

        mid = mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;

        mid = mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    int k = 2;

    int f = firstOcc(arr, 8, k);
    int l = lastOcc(arr, 8, k);

    cout << f << " " << l << " " << endl;

    return 0;
}