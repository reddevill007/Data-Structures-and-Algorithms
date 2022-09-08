#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = power(n);

    cout << "Power of 2^" << n << " is: " << ans;
}