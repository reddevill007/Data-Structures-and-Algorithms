#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // FIFO
    queue<string> s;

    s.push("Saurabh");
    s.push("Pandey");
    s.push("Inertia");

    cout << "Firse Element: " << s.front() << endl;
    s.pop();
    cout << "Firse Element: " << s.front() << endl;

    cout << "Size after pop: " << s.size() << endl;
}