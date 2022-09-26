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

Node *solve(Node *first, Node *second)
{
    // if only one element is present in first list
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            // add node between the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }

        else
        {
            // incrementing curr1 and next1
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *sortTwoLists(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main()
{
    Node *node1 = new Node(1);
    Node *head1 = node1;
    Node *tail1 = node1;
    Node *node2 = new Node(2);
    Node *head2 = node2;
    Node *tail2 = node2;
    insertAtEnd(tail1, 3);
    insertAtEnd(tail1, 5);
    insertAtEnd(tail1, 7);
    insertAtEnd(tail2, 2);
    insertAtEnd(tail2, 4);
    insertAtEnd(tail2, 6);

    cout << "Linked list before merging: " << endl;
    print(head1);
    print(head2);

    head1 = sortTwoLists(head1, head2);
    cout << "\nLinked list after merging: " << endl;
    print(head1);
}
