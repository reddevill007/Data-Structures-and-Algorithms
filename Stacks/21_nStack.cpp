#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;

    int n, s;
    int freespot;

public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top initialise
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // next initialise
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }

        // update last index to -1
        next[s - 1] = 0;

        // freespot initialise
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Check for overflow.
        if (freespot == -1)
        {
            return false;
        }

        // find index
        int index = freespot;

        // insert element into array
        arr[index] = x;

        // update freespot
        freespot = next[index];

        // update next
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check underflow
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];

        // update top
        top[m - 1] = next[index];

        // update next
        next[index] = freespot;

        // update freespot
        freespot = index;

        return arr[index];
    }
};

int main()
{
    NStack *s = new NStack(3, 6);

    bool ans = s->push(10, 1);
    cout << ans << endl;

    ans = s->push(20, 1);
    cout << ans << endl;

    ans = s->push(30, 2);
    cout << ans << endl;

    int res = s->pop(1);
    cout << res << endl;

    res = s->pop(2);
    cout << res << endl;
}