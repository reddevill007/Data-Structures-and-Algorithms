#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];

    /* Reading values into the array */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "a[" << i << "]"
                 << "[" << j << "] = ";
            cin >> a[i][j];

            cout << "b[" << i << "]"
                 << "[" << j << "] = ";
            cin >> b[i][j];

            c[i][j] = a[i][j] + b[i][j];
        }
    }

    /* Now we are printing the values into the matrix form */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}