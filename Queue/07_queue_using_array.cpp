#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class Queue
{

    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (qfront == rear)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
            cout << "Data " << data << endl;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        // Implement the front() function
        if (qfront == rear)
        {
            return -1;
        }
        return arr[qfront];
    }
};

int main()
{
    Queue *q = new Queue;
    q->enqueue(17);
    q->enqueue(23);
    q->enqueue(11);

    cout << "Removing " << q->dequeue() << endl;
    cout << "Removing " << q->dequeue() << endl;
    cout << "Removing " << q->dequeue() << endl;
    cout << "Removing " << q->dequeue() << endl;
}