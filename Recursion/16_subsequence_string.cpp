#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    int el = str[index];
    output.push_back(el);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;

    solve(str, output, index, ans);
    return ans;
}

int main()
{
    string str = "abc";

    vector<string> ans = subsequences(str);
    cout << "The Subsets of String " << str << " is" << endl;
    ;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << endl;
}