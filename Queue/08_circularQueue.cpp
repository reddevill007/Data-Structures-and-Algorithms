#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class CircularQueue
{
private:
    int size;
    int *arr;
    int rear;
    int front;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[size];
        rear = front = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // Write your code here.

        // if queue is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        // if queue is empty
        else if (front == -1)
        {
            rear++;
            front++;
        }

        // if rear is at the end but front is not at 0
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }

        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        // Write your code here.

        //  empty queue
        if (front == -1)
        {
            return -1;
        }

        // storing the ans
        int ans = arr[front];

        // removing the element
        arr[front] = -1;

        // single element is present
        if (front == rear)
        {
            front = rear = -1;
        }

        else if (front == size - 1)
        {
            front = 0;
        }

        else
        {
            front++;
        }

        return ans;
    }
};

int main()
{
}