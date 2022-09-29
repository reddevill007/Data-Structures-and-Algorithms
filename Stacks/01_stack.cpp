#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack *st = new Stack(5);
    st->push(22);
    st->push(11);
    st->push(3);
    st->push(22);
    st->push(11);
    st->push(3);

    cout << st->peek() << endl;

    st->pop();
    cout << st->peek() << endl;

    st->pop();
    cout << st->peek() << endl;

    st->pop();
    cout << st->peek() << endl;

    cout << "isEmpty " << st->isEmpty() << endl;
}