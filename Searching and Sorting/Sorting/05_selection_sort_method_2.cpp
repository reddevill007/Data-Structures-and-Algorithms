#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printVector(vector<int> a)
{
    cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        cout << a.at(i) << ' ';
}

int main()
{
    vector<int> v = {2, 4, 1, 0, 8, 6};
    printVector(v);
    selectionSort(v, v.size());
    printVector(v);
}