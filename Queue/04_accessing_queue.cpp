/*
    We can access the elements of a queue using following
    methods:
    --> front() - returns the element from the front of a queue
    --> back() - returns the element from the back of a queue
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creating queue of int
    queue<int> nums;

    // pusing elements inside queue
    nums.push(190);
    nums.push(221);
    nums.push(334);
    nums.push(511);
    nums.push(532);

    // get the element at the front
    int front = nums.front();
    cout << "First element: " << front << endl;

    // get the element at the back
    int back = nums.back();
    cout << "Last element: " << back << endl;
}