#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    float biggest;
    cout << "Enter the size of array ";
    cin >> n;

    float arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number ";
        cin >> arr[i];
    }

    biggest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > biggest)
            biggest = arr[i];
    }

    cout << "The largest element in the array is " << biggest << endl;

    return 0;
}