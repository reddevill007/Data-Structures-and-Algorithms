#include <iostream>
#include <stack>
using namespace std;

// function prototype for display_stack utility
void display_stack(stack<string> st);

int main()
{

    // create a stack of strings
    stack<string> colors;

    // push elements into the stack
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");

    cout << "Initial Stack: ";
    // print elements of stack
    display_stack(colors);

    // removes "Blue" as it was inserted last
    colors.pop();

    cout << "Final Stack: ";

    // print elements of stack
    display_stack(colors);

    return 0;
}

// utility function to display stack elements
void display_stack(stack<string> st)
{

    while (!st.empty())
    {
        cout << st.top() << ", ";
        st.pop();
    }

    cout << endl;
}