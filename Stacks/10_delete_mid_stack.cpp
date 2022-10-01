#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void solve(stack<int> &inputStack, int ct, int n)
{
    // Base Case
    if (ct == n / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, ct + 1, n);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    int ct = 0;
    solve(inputStack, ct, N);
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

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    printStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
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
    deleteMiddle(s, 5);
    printStack(s);
}