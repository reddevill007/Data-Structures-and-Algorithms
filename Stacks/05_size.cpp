#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // create a stack of int
    stack<int> prime_nums;

    // push elements into the stack
    prime_nums.push(2);
    prime_nums.push(3);
    prime_nums.push(5);

    // get the size of the stack
    int size = prime_nums.size();
    cout << "Size of the stack: " << size;

    return 0;
}