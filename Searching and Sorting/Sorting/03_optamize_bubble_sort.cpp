#include <bits/stdc++.h>

using namespace std;

void optamize_bubble_sort(int arr[], int size)
{
    int flag = 0;
    for (int i = 0; i < size - 1; i++) // outer loop for passes
    {
        for (int j = 0; j < size - i - 1; j++) // inner loop for comparisons
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];   // assigning  value of first element into temp
                arr[j] = arr[j + 1]; // assigning value of second element into first one
                arr[j + 1] = temp;   // assigning value of temp into second element
                flag = 1;            // make the value of flag 1 indicating that interchanging took place in the current pass
            }
        }
        /* no interchanging took place in the pass just concluded
           thus indicating that array has turned sorted, no need to go for more passes */
        if (flag == 0)
            break; // terminates the outer loop
        else
            flag = 0; // reinitialising value of flag with 0
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