#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
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
    int n;
    cout << "Enter the size of array ";
    cin >> n;

    int sales[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the sales of " << i + 1 << " salesperson: ";
        cin >> sales[i];
    }

    selection_sort(sales, n);

    print_arr(sales, n);
}