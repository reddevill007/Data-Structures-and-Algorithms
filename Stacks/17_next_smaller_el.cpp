#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        // ans is stack top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

void print(vector<int> a)
{
    cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        cout << a.at(i) << ' ';
}

int main()
{
    vector<int> ip = {2, 1, 4, 3};
    cout << "input -> ";
    print(ip);
    vector<int> op = nextSmallerElement(ip, ip.size());
    cout << endl
         << "output -> ";
    print(op);
}