#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;

    while (!q.empty())
    {

        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {

        q.push(s.top());
        s.pop();
    }

    return q;
}

void printQueue(queue<int> q)
{
    cout << "Elements of queue are : \n";
    while (!q.empty())
    {

        cout << q.front() << " ";

        q.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << endl;
    cout << "Elements of queue are : \n";
    printQueue(q);
    cout << endl;

    q = rev(q);
    cout << endl;
    printQueue(q);
    cout << endl;
}