#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string map[])
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string val = map[number];

    for (int i = 0; i < val.length(); i++)
    {
        output.push_back(val[i]);
        solve(digits, output, index + 1, ans, map);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;

    if (digits.length() == 0)
    {
        return ans;
    }
    string output;
    int index = 0;

    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, map);
    return ans;
}

int main()
{
    string str = "23";
    vector<string> ans = letterCombinations(str);
    cout << "Possible letter combination for " << str << " are" << endl;
    ;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << endl;
}