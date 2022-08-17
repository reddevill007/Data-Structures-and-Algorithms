#include <bits/stdc++.h>

using namespace std;

int mySqrt(int x)
{
    int s = 0, e = x;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;

    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    int tempSol = mySqrt(n);

    cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}