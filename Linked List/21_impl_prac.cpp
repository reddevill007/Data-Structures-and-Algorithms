#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;

    ListNode()
    {
        value = 0;
        next = nullptr;
    }

    ListNode(int val)
    {
        value = val;
        next = nullptr;
    }

    ListNode(int val, ListNode *nextPtr)
    {
        value = val;
        next = nextPtr;
    }
};

class LinkedList
{
private:
    ListNode *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void traverse();
    void insertNode(int);
    void deleteNode(int);
    int getLength(ListNode *);
    bool detectCycle();
};

void LinkedList::insertNode(int val)
{
    ListNode *temp = head;

    ListNode *newNode = new ListNode(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::deleteNode(int index)
{
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    ListNode *curr = head;
    ListNode *prev = head;

    int length = getLength(curr);

    if (length < index)
    {
        cout << "Index out of range"
             << endl;
        return;
    }

    while (index-- > 0)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    delete curr;
}

int LinkedList::getLength(ListNode *node)
{
    ListNode *temp = node;
    int count = 0;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void LinkedList::traverse()
{
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    ListNode *temp = head;

    while (temp)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << endl;
}

bool LinkedList::detectCycle()
{
    if (!head || !head->next)
    {
        cout << "Empty list" << endl;
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{
    LinkedList list;

    list.insertNode(11);
    list.insertNode(62);
    list.insertNode(23);
    list.insertNode(41);

    cout << "Elements of the list are: ";

    list.traverse();
    cout << endl;

    list.deleteNode(2);

    cout << "Elements of the list are: ";
    list.traverse();
    cout << endl;
}