#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Deletion and insertion from both end
    // Random access is possible
    // Dynamic

    deque<int> d;

    d.push_back(1);
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);

    d.pop_back();
    d.pop_front();

    cout << "Element at second index " << d.at(1) << endl;
    cout << "Empty or not: " << d.empty() << endl;
    cout << "First element " << d.front() << endl;
    cout << "Last element " << d.back() << endl;

    cout << "Size before erase " << d.size() << endl;
    // Delets the first element
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size after erase " << d.size() << endl;
}