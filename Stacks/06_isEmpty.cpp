#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // create a stack of double
    stack<double> nums;

    cout << "Is the stack empty? ";

    // check if the stack is empty
    if (nums.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << "Pushing elements..." << endl;

    // push element into the stack
    nums.push(2.3);
    nums.push(9.7);

    cout << "Is the stack empty? ";

    // check if the stack is empty
    if (nums.empty())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}