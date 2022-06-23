#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number ";
        cin >> arr[count];
    }
    int val;

    cout << "Enter the value to be searched ";
    cin >> val;

    for (int i = 0; i < n; i++)
    {
        if (val == arr[i])
        {
            flag = true;
        }
    }

    if (flag)
        cout << "Found the number in array" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}