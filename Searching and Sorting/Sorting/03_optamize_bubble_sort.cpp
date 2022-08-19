#include <bits/stdc++.h>

using namespace std;

void optamize_bubble_sort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        /* no interchanging took place in the pass just concluded
           thus indicating that array has turned sorted, no need to go for more passes */

        if (swapped == false)
            break;
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

    optamize_bubble_sort(arr, 8);

    cout << endl
         << "Sorted array" << endl;
    print_arr(arr, 8);
}