#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool isValidParenthesis(string e)
{
    stack<char> s;

    for (int i = 0; i < e.length(); i++)
    {
        char ch = e[i];

        // If opening bracket, stack push
        // If closing bracket, stackTop check and pop
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // Closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "({[]})";
    bool res = isValidParenthesis(s);
    cout << "Valid or not: " << res << endl;
}