#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 2};
    int ct = 0, val = 2;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == val)
        {
            cout << "value " << val << " was found at index " << i << endl;
            ct++;
        }
    }

    cout << "Value " << val << " occured " << ct << " times" << endl;

    return 0;
}