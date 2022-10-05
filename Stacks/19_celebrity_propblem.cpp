#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool knows(vector<vector<int>> &M, int n, int a, int b)
{
    if (M[a][b] == 1)
    {
        return true;
    }
    return false;
}

// Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;

    // Py=ush all element in stack
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    // step 2:
    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(M, n, a, b))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    // step 3: single element in stack is potential celeb
    int candidate = s.top();

    // row check
    bool rowCheck = false;
    int zeroCt = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 0)
        {
            zeroCt++;
        }
    }

    // all zeros
    if (zeroCt == n)
    {
        rowCheck = true;
    }

    // Col check
    bool colCheck = false;
    int colCt = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[i][candidate] == 1)
        {
            colCt++;
        }
    }

    // all 1 except diagnol
    if (colCt == n - 1)
    {
        colCheck = true;
    }

    if (colCheck && rowCheck)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};

    int ans = celebrity(M, 3);
    cout << "ans -> " << ans << endl;
}