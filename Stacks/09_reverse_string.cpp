#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    string str = "babbar";
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++)
    {
        char x = s.top();
        s.pop();
        str[i] = x;
    }

    cout << str << endl;
}