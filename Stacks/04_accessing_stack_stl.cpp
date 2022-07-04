#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // create a stack of strings
    stack<string> colors;

    // push element into the stack
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");

    // get top element
    string top = colors.top();

    cout << "Top Element: " << top;

    return 0;
}