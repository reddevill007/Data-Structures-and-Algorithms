#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = fib(n);

    cout << ans << endl;
}