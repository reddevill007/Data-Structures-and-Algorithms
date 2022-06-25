#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int arr[] = {2, 5, 3, 1, 7, 6, 4, 10};

    cout << "Unsorted array" << endl;
    print_arr(arr, 8);

    selection_sort(arr, 8);

    cout << endl
         << "Sorted array" << endl;
    print_arr(arr, 8);

    return 0;
}