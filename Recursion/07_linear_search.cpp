#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArr(int arr[], int n)
{
    cout << "Size of array is: " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int n, int key)
{
    printArr(arr, n);
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    return linearSearch(arr + 1, n - 1, key);
}

int main()
{
    int arr[5] = {2, 4, 66, 8, 9};
    int size = 5;

    bool ans = linearSearch(arr, 5, 8);

    cout << ans << endl;
}