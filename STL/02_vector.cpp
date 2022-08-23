#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // Size 5 with all element 1 else all element are 0
    vector<int> a(5, 1);
    cout << "Printing vector a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copying vector a to vector b
    vector<int> b(a);
    cout << "Printing vector b" << endl;
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Element at second index " << v.at(2) << endl;
    cout << "First element " << v.front() << endl;
    cout << "Last element " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clear only make size 0 not capacity
    v.clear();
}