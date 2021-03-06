#include <bits/stdc++.h>

using namespace std;

bool binary_search(int n, int arr[], int val)
{
    int lft = 0;
    int rt = n - 1;
    int mid = (lft + rt) / 2;

    while (lft < rt)
    {
        if (val > arr[mid])
        {
            lft = mid + 1;
        }
        else
        {
            if (val > arr[mid])
            {
                rt = mid + 1;
            }
            else
                return true;
        }
        mid = (lft + rt) / 2;
    }
    return false;
}

int main()
{
    int arr[] = {10, 23, 45, 67, 88, 89, 90, 93, 95, 100};
    int size = 10, val = 455;

    bool ans = binary_search(size, arr, val);

    if (ans)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}