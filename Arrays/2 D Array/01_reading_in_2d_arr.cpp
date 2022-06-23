#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sc[3][3];

    /* Reading values into the array */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "sc[" << i << "]"
                 << "[" << j << "] = ";
            cin >> sc[i][j];
        }
    }

    /* Now we are printing the values into the matrix form */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sc[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}