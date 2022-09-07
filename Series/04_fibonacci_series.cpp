#include <iostream>
#include <vector>

using namespace std;

void print_fibonacci_series(vector<int> v, int n)
{
    int nextTerm = 0, t1 = v[0], t2 = v[1];
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
        }
        if (i == 2)
        {
            cout << t2 << ", ";
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);

    int n;
    cout << "Enter the number of terms you want in fibonacci series: ";
    cin >> n;

    print_fibonacci_series(arr, n);
}