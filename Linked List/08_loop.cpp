#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Distructor
    ~Node()
    {
        int val = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // Empty List
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        // non-empty list
        // assuming that the element is present in the list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // Element found -> current representing element
        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deleteNode(int val, Node *&tail)
{
    // Empty List
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        // non empty
        // Assuming that value is present in list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // For One Node
        if (curr == prev)
        {
            tail = NULL;
        }

        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout
        << endl;

    cout << "Value of tail is " << tail->data << endl;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head;
    map<Node *, bool> visited;

    while (temp != NULL)
    {
        if (visited[temp])
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);

    print(tail);
    bool loop = detectLoop(tail);
    cout << "Loop is present or not: " << loop << endl;
}