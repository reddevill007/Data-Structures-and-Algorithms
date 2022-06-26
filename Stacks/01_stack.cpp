#include <bits/stdc++.h>

using namespace std;

int st[100], n = 100, top = -1;

void push(int val)
{
    if (top >= n)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        st[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "The popped element is " << st[top] << endl;
        top--;
    }
}

void peek()
{
    cout << "Top of stack is " << st[top] << endl;
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << st[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}

int main()
{
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Peek stack" << endl;
    cout << "4) Display stack" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 5);
}