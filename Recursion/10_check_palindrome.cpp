#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkPalindrome(string str, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, s + 1, e - 1);
    }
}

int main()
{
    string str = "abcba";
    int n = str.length();
    bool ans = checkPalindrome(str, 0, n - 1);

    if (ans)
    {
        cout << "The given string is a palindrome" << endl;
    }
    else
    {
        cout << "The given string is not a palindrome" << endl;
    }
}