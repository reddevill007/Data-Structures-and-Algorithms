#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (arr[i + 1] < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {8, 6, 3, 9, 12, 44, 76, 0};
    int odd[5] = {2, 5, 4, 1, 8};

    swapAlternate(even, 8);
    printArray(even, 8);
    return 0;
}