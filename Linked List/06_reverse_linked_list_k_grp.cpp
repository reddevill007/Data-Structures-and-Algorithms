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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLen(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }

    return len;
}

// Reverse in k group
Node *kReverse(Node *head, int k)
{
    // base Case
    if (head == NULL)
        return NULL;

    // Step 1: reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;

    int ct = 0;

    while (curr != NULL && ct < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        ct++;
    }

    // Step 2: recursion
    if (next != NULL)
        head->next = kReverse(next, k);

    // Step 3: return head of reversed list
    return prev;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertAtEnd(tail, 10);
    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);
    insertAtEnd(tail, 50);
    insertAtEnd(tail, 60);
    print(head);

    Node *reversedKgrp = kReverse(head, 2);
    cout << "List reversed in k group is " << endl;
    print(reversedKgrp);
}