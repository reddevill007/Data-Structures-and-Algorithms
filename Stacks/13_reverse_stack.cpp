#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void insertAtBottom(stack<int> &s, int x)
{
    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int top = s.top();
    s.pop();

    insertAtBottom(s, x);

    s.push(top);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, top);
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
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);
    reverseStack(s);
    printStack(s);
}