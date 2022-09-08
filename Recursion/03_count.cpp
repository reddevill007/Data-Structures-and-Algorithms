#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void count(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }

    cout << n << " ";

    count(n - 1);
}

void reverseCount(int n)
{
    if (n == 0)
    {
        return;
    }

    reverseCount(n - 1);

    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    count(n);
    reverseCount(n);
}