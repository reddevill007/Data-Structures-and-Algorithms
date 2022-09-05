#include <iostream>

using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 5, b = 10;
    int ans = getMax(a, b);

    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    int ans = getMax(a, b);
    cout << ans << endl;
}