#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // LIFO
    stack<string> s;

    s.push("Saurabh");
    s.push("Pandey");
    s.push("Inertia");

    cout << "Top Element: " << s.top() << endl;

    s.pop();
    cout << "Top Element: " << s.top() << endl;

    cout << "Size of stack " << s.size() << endl;

    cout << "Empty or not " << s.empty() << endl;
}