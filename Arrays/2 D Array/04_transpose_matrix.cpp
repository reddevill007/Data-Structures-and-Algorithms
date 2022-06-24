#include <bits/stdc++.h>

using namespace std;

void transpose(int p[3][3], int t[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i][j] = p[j][i];
        }
    }
}

int main()
{
    int tps[3][3], ans[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the elements of matrix tps[" << i << "][" << j << "] = ";
            cin >> tps[i][j];
        }
    }

    transpose(tps, ans);

    cout << "Transpose of a matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << ans[i][j];
        }
        cout << endl;
    }
}