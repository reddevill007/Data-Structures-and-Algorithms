#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0)
        {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty())
        {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends

// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    // step 1: pop first k element from queue and put into stack
    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // step 2: fetch from stack and push int q;
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // step 3: fetch first (n - k) element from Q and push back
    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
}