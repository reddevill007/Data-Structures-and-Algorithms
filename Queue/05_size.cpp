#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // create a queue of string
    queue<string> languages;

    // push element into the queue
    languages.push("Python");
    languages.push("C++");
    languages.push("Java");

    // get the size of the queue
    int size = languages.size();
    cout << "Size of the queue: " << size;
}