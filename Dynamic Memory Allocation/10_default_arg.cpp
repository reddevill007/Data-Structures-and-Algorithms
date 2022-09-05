#include <iostream>

using namespace std;

// Default arg always start from right most variable
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    print(arr, 5, 2);
    print(arr, 5);
}