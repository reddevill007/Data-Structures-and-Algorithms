#include <iostream>
#include <vector>
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

// Itrative Method
Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

void reverse(Node *&head, Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, curr, forward);
    curr->next = prev;
}

Node *reverseLinkedListRecursive(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    reverse(head, prev, curr);
    return head;
}

// Another way of recursive reversal
Node *reverse(Node *head)
{
    // Base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

Node *reverseLinkedList2(Node *head)
{
    return reverse(head);
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;

    insertAtHead(head, 10);
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);

    head = reverseLinkedList(head);
    print(head);

    head = reverseLinkedListRecursive(head);
    print(head);

    head = reverseLinkedList2(head);
    print(head);
}