#include <iostream>
#include <queue>

using namespace std;

int main()
{

  // create a queue of string
  queue<string> animals;

  // push elements into the queue
  animals.push("Cat");
  animals.push("Dog");

  cout << "Queue: ";

  // print elements of queue
  // loop until queue is empty
  while (!animals.empty())
  {

    // print the element
    cout << animals.front() << ", ";

    // pop element from the queue
    animals.pop();
  }

  cout << endl;
}

/*
In the above example, we have created a queue of strings called animals. Here, we have used the push() method to add elements to the end of the queue.

animals.push("Cat");
animals.push("Dog");


Instead of directly printing the contents of the queue, we have used a while loop and various queue methods.

while(!animals.empty()) {
  cout << animals.front() << ", ";
  animals.pop();
}


This is because the STL queue is an STL Container Adapter that provides restrictive access to make it behave like a standard queue data structure.

As a result, we cannot iterate through the queue like iterating through vectors or other containers.

Instead, we print its front and then pop the element repeatedly inside a loop until the queue is empty.
*/