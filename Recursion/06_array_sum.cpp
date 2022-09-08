#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrSum(int arr[], int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }

    return arr[0] + arrSum(arr + 1, n - 1);
}

int main()
{
    int arr[5] = {2, 4, 66, 8, 9};
    int size = 5;

    int ans = arrSum(arr, size);
    cout << ans;
}