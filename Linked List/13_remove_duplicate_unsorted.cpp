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

void insertAtHead(Node *&head, int data)
{
    // new node creation
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int data)
{
    // new node creation
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    // Insert at start
    if (pos == 1)
    {
        insertAtHead(head, data);
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
        insertAtEnd(tail, data);
        return;
    }

    // Inserting new node
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(int pos, Node *&head, Node *&tail)
{
    // Deleting first node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // updating tail node
        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteByValue(int val, Node *&head, Node *&tail)
{
    // Deleting first node
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;

        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        // updating tail node
        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " X " << endl;
}

void removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    if (curr == NULL)
        return;

    map<int, bool> visited;

    while (curr != NULL)
    {

        if (visited[curr->data])
        {
            Node *temp = curr;
            curr = curr->next;
            delete (temp);
            prev->next = curr;
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
        }
        curr = curr->next;
    }
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 10);
    insertAtHead(head, 110);
    insertAtHead(head, 110);
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 40);
    insertAtHead(head, 30);

    cout << "Linked list before duplicate removal: " << endl;
    print(head);

    removeDuplicates(head);
    cout << "\nLinked list after duplicate removal: " << endl;
    print(head);
}
