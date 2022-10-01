#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void sortedInsertion(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();

    sortedInsertion(s, x);

    s.push(top);
}
void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int top = s.top();
    s.pop();

    sortStack(s);

    sortedInsertion(s, top);
}

void printStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
    {
        cout << endl;
        return;
    }

    int x = s.top();
    s.pop();

    printStack(s);

    cout << x << " ";
    s.push(x);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(20);
    s.push(-3);
    s.push(-23);
    s.push(5);
    printStack(s);
    sortStack(s);
    printStack(s);
}