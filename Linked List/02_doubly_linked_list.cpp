#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd(Node *&head, Node *&tail, int data)
{
    // Empty list
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{

    int len = getLength(head);
    if (pos > len)
    {
        cout << pos << " Out of bound" << endl;
        return;
    }

    // Insert at start
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int i = 1;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    // insertion at end
    if (temp->next == NULL)
    {
        insertAtEnd(head, tail, data);
        return;
    }

    // Inserting new node
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void print(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl
         << endl;
}

int main()
{
    system("CLS");
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    print(head, tail);
    // cout << "Length of Linked list is: " << getLength(head) << endl;

    insertAtHead(head, tail, 20);
    print(head, tail);

    insertAtHead(head, tail, 30);
    print(head, tail);

    insertAtHead(head, tail, 40);
    print(head, tail);

    insertAtEnd(head, tail, 22);
    print(head, tail);

    insertAtEnd(head, tail, 23);
    print(head, tail);

    insertAtEnd(head, tail, 24);
    print(head, tail);

    insertAtPosition(head, tail, 43, 7);
    print(head, tail);

    insertAtPosition(head, tail, 13, 3);
    print(head, tail);

    insertAtPosition(head, tail, 0, 1);
    print(head, tail);

    insertAtPosition(head, tail, 0, 100);
    print(head, tail);
}