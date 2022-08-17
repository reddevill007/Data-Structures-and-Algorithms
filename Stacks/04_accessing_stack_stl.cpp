#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<string> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    // create a stack of strings
    stack<string> colors;

    // push element into the stack
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");

    // Printing stack
    printStack(colors);

    return 0;
}