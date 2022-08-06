#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the deciml number:   ";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "Answer is " << ans << endl;
}