#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";

        s.pop();
    }
    cout << endl;
}

int sumStack(stack<int> s)
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}

int main()
{

    stack<int> s1;
    stack<int> s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s2.push(10);
    s2.push(2);
    s2.push(1);
    s2.push(4);
    s2.push(6);
    int sum1 = sumStack(s1);
    int sum2 = sumStack(s2);

    if (sum1 > sum2)
        s1.pop();
    else
        s2.pop();

    return 0;
}