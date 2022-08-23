#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);

    cout << "Finding 6 using binary search: " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Lower bound: " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3, b = 5;

    cout << "Max of a, b " << max(a, b) << endl;
    cout << "Min of a, b " << min(a, b) << endl;
    swap(a, b);
    cout << "After swaping a = " << a << " b = " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());

    cout << "After reversing " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After rotating " << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Works on intro sort which is combination of quick sort, heap sort and insertion sort
    sort(v.begin(), v.end());
}