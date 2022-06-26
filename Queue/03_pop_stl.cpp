#include <iostream>
#include <queue>

using namespace std;

// function prototype for display_queue utility
void display_queue(queue<string> q);

int main()
{
    // creating a queue of strings
    queue<string> names;

    // pushing elements in the queue
    names.push("Inertia");
    names.push("Neutrino");
    names.push("Electron");
    names.push("Gravity");

    cout << "Initial Queue: ";
    display_queue(names);

    // remove element from queue
    names.pop();

    cout << "Final Queue: ";
    display_queue(names);
}

// utility function to display queue
void display_queue(queue<string> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
}