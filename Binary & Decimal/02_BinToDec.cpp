#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the binary number:   ";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "Answer is " << ans << endl;

    return 0;
}