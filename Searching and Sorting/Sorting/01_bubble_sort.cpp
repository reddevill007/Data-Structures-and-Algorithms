#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    bubble_sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}