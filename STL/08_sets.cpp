#include <iostream>
#include <set>

using namespace std;

int main()
{
    // It is implemented using BST
    // Modification of element is not possible
    // Slower than unordered set
    // Only unique element
    // Asending order

    set<int> s;

    s.insert(5); // O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << endl
             << i << endl;
    }

    cout << "is 5 present or not: " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }
}