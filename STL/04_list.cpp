#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Doubly Linked List is used to implement List
    list<int> l;
    list<int> n(5, 100);
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "List after erase: ";

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of list : " << l.size() << endl;

    cout << "List n is: ";

    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
}