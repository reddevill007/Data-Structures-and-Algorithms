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

bool checkArr(vector<int> arr)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
// Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return checkArr(arr);
}

// Optamized Function with O(1) space complexity
Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Function to check whether the list is palindrome.
bool isPalindromeOptimized(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    // step 1-> get mid
    Node *mid = getMid(head);

    // step 2 -> reverse list after mid
    Node *temp = mid->next;
    mid->next = reverse(temp);

    // step 3 -> compare both halves
    Node *head1 = head;
    Node *head2 = mid->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // step 2 -> repeat step 2
    mid->next = reverse(temp);

    return true;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 1);

    print(head);

    bool ans = isPalindromeOptimized(head);
    cout << "\nLinked list is palindrome or not: " << ans << endl;
}
