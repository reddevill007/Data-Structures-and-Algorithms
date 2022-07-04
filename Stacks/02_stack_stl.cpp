/*
    Stack Methods
    In C++, the stack class provides various methods to perform different operations on a stack.

    Operation	Description
    push()	    adds an element into the stack
    pop()	    removes an element from the stack
    top()	    returns the element at the top of the stack
    size()	    returns the number of elements in the stack
    empty()	    returns true if the stack is empty
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // create a stack of strings
    stack<string> languages;

    // add element to the Stack
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");

    // print top element
    cout << languages.top();

    return 0;
}