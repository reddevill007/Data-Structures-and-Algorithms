#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void solve(stack<int> &myStack, int x)
{
    // Base Case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int top = myStack.top();
    myStack.pop();

    solve(myStack, x);
    myStack.push(top);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
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
    pushAtBottom(s, 0);
    printStack(s);
}