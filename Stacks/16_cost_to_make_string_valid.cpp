#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int findMinimumCost(string str)
{
    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // ch is closed bracket
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    // stack contain invalid expression only
    int open = 0, close = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            open++;
        }
        else
        {
            close++;
        }
        s.pop();
    }

    int ans = (((open + 1) / 2) + ((close + 1) / 2));
    return ans;
}

int main()
{
    string s = "{{{{}}";
    int res = findMinimumCost(s);
    cout << "No of moves requied " << res << endl;
}