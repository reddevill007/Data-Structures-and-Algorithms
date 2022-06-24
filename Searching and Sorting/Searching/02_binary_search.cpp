#include <bits/stdc++.h>

using namespace std;

bool binary_search(int n, int arr[], int val)
{
    int lft = 0;
    int rt = n;
    int mid = (lft + rt) / 2;

    while (lft < rt)
    {
        if (val < mid)
        {
            lft = mid + 1;
        }
        else
        {
            if (val > mid)
            {
                rt = mid - 1;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, val = 15;

    bool ans = binary_search(size, arr, val);

    if (ans)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}